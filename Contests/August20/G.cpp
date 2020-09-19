#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n; i++)

#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define endl "\n"
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef long long ll;
//=======================
const int MOD = 1'000'000'007;
const int N = 2e6 + 13;
//=======================
// vi g[N];
// int a[N];
//=======================
int binomial(int n, int k)
{

  if (k == 0 || k == n)
    return 1;

  return binomial(n - 1, k - 1) +
         binomial(n - 1, k);
}
void solve()
{
  int n, C, k, a, b, c;
  cin >> n >> C >> k;
  int pen[n];
  int erase[C];
  int colors[3001] = {0};
  fo(i, n)
  {
    cin >> a >> b >> c;
    pen[i] = c;
    colors[i]++;
  }
  fo(i, C)
  {
    cin >> erase[i];
  }
  int total = 0;
  for (int i = 0; i <= 3000; i++)
  {
    if (colors[i] >= 3)
      total += binomial(colors[i], 3);
  }
  vvi subsets;
  for (int i = 0; i < (1 << n); i++)
  {
    vi list;
    for (int j = 0; j < n; j++)
    {
      if ((i & (1 << j)) > 0)
        list.PB(pen[j]);
    }
    if (list.size() != 0)
      subsets.PB(list);
  }
  for (int i = 0; i < subsets.size(); i++)
  {
    int aux[3001] = {0};
    fo(l, 3001)
        aux[l] = colors[l];
    int len = k;
    int res = 0;
    for (int j = 0; j < subsets[i].size(); j++)
    {
      if (len < erase[pen[j] - 1])
        break;
      else
      {
        aux[pen[j]]--;
        len = len - erase[pen[j] - 1];
        // ll res = 0;
      }
      for (int i = 0; i <= 3000; i++)
      {
        if (colors[i] >= 3)
          total += binomial(colors[i], 3);
      }
      total = min(res, total);
    }
  }
  cout << total << endl;
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  // #endif
  int t = 1;

  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}
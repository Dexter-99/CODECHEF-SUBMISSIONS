/**
 * CODE
 * BY
 * VIKAS VERMA
 * 
 * $$Always Check for Constraints
*/
#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, n) for (int i = 1; i <= n; i++)
#define fr(i, n) for (ll i = n - 1; i >= 0; i--)
#define REP(l, r) for (int i = l; i < r; i++)
#define printclock cerr << "Time : " << 1000 * (ld)clock() / (ld)CLOCKS_PER_SEC << "ms\n"
#define jaldi ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
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
const int N = 65;
//=======================
vi g[N];
int a[N][N];
//=======================
void transpose(int l)
{
  for (int i = 0; i <= l; i++)
  {
    for (int j = i + 1; j <= l; j++)
    {
      swap(a[i][j], a[j][i]);
    }
  }
}
void solve()
{
  int n;
  cin >> n;
  Fo(i, n)
  {
    Fo(j, n)
    {
      cin >> a[i][j];
    }
  }
  int res = 0;
  while (true)
  {
    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        if (a[i][j] != ((i - 1) * n + j))
        {
          flag = false;
          break;
        }
      }
    }
    if (flag)
    {
      break;
    }
    int l1, l2;
    int L = 0;
    for (l1 = 1; l1 < n; l1++)
    {
      if (a[l1][1] >= a[l1 + 1][1])
        break;
    }
    for (l2 = 0; l2 < n; l2++)
    {
      if (a[1][l2] >= a[1][l2 + 1])
        break;
    }
    L = min(l1, l2);

    transpose(L);
    // int count=1;
    // bool flag=true;
    res++;
  }
  cout << res << endl;
}

int main()
{
  jaldi
#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t = 1;

  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
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
vi g[N];
int a[N];
//=======================

void solve()
{
  int n;
  cin >> n;
  if (n % 2 == 0)
  {
    for (int i = 1; i <= n; i++)
    {
      if (i % 2)
        cout << i + 1 << " ";
      else
        cout << i - 1 << " ";
    }
    cout << endl;
  }
  else
  {
    for (int i = 1; i <= n / 2; i++)
    {
      if (i % 2)
        cout << i + 1 << " ";
      else
        cout << i - 1 << " ";
    }
    for (int i = n / 2 + 1; i < n; i++)
      cout << i + 1 << " ";
    if (n == 3)
      cout << n / 2 << endl;
    else
      cout << n / 2 << endl;
  }
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
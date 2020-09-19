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
typedef vector<ll> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef long long ll;
//=======================
const int MOD = 1'000'000'007;
const int N = 2e6 + 13;
//=======================
vi g;
int a[N];
//=======================
ll findGolomb(ll n)
{

  if (n == 1)
    return 1;

  return 1 + findGolomb(n -
                        findGolomb(findGolomb(n - 1)));
}
void build()
{
  for (ll i = 1; i <= 1000000000; i++)
    g.PB(findGolomb(i));
}
void solve()
{
  int l, r;
  cin >> l >> r;
  ll sum = 0;
  for (int i = l - 1; i <= r - 1; i++)
    sum = (sum + g[i]) % MOD;
  cout << sum << endl;
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t = 1;

  cin >> t;
  build();
  while (t--)
  {
    solve();
  }

  return 0;
}
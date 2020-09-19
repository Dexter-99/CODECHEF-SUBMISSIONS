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
// 2 10 1 1 9 1 5
ll gcd(ll a, ll b)
{
  return b == 0 ? a : gcd(b, a % b);
}
ll exp(ll a, ll n)
{
  ll res = 1;
  a = a % MOD;
  while (n > 0)
  {
    if (n & 1)
      res = ((__int128_t)res * a) % MOD;
    a = ((__int128_t)a * a) % MOD;
    n >>= 1;
  }
  return res;
}

void solve()
{
  ll a, b, n;
  cin >> a >> b >> n;
  ll sum = (exp(a, n) + exp(b, n)) % MOD;
  ll diff = abs(a - b);
  cout << gcd(sum, diff) % MOD << endl;
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

  while (t--)
  {
    solve();
  }

  return 0;
}
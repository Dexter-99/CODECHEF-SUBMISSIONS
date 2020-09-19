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
const int N = 2e6 + 13;
const int maxN = 100001;
//=======================
vi g[N];
int a[N];
ll factorial[maxN];
//=======================
ll exp(ll a, ll n)
{
  ll res = 1;
  a = a % MOD;
  while (n > 0)
  {
    if (n & 1)
      res = (res * a) % MOD;
    a = (a * a) % MOD;
    n >>= 1;
  }
  return res;
}
ll inverse(ll a)
{
  return exp(a, MOD - 2);
}
ll binomial(ll n, ll k)
{
  return factorial[n] * inverse(factorial[k] * factorial[n - k] % MOD) % MOD;
}
void solve()
{
  ll n;
  cin >> n;
  ll a[n];
  ll _max = INT64_MIN;
  map<ll, ll> mp;
  fo(i, n)
  {
    cin >> a[i];
    mp[a[i]]++;
    _max = max(_max, a[i]);
  }
  if (mp[_max] & 1)
  {
    cout << exp(2, n) << endl;
  }
  else
  {
    //   cout<<factorial[4]<<endl;
    //  int  val=binomial(mp[_max], mp[_max] / 2);
    //  cout<<val<<endl;
    ll val = (exp(2, mp[_max]) - binomial(mp[_max], mp[_max] / 2) + MOD) % MOD;
    cout << (exp(2, n - mp[_max]) * val) % MOD << endl;
  }
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
  factorial[0] = 1;
  for (int i = 1; i <= maxN; i++)
  {
    factorial[i] = factorial[i - 1] * i % MOD;
  }

  while (t--)
  {
    solve();
  }

  return 0;
}
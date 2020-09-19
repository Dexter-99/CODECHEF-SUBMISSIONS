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
vi g[N];
ll a[N];
//=======================
int fact[5001];
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

ll inverse(int n)
{
  return exp(n, MOD - 1);
}

ll binomial(int n, int k)
{
  return fact[n] * inverse(fact[k]) % MOD * inverse(fact[n - k]) % MOD;
}

void solve()
{
  int n, val;
  cin >> n;
  unordered_map<ll, ll> mp;
  int _max = -1;
  fo(i, n)
  {
    cin >> val;
    _max = max(_max, val);
    mp[val]++;
  }
  for (int i = 0; i < n; i++)
  {
    cout << exp(2, n - i) << " ";
  }
  cout << endl;
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
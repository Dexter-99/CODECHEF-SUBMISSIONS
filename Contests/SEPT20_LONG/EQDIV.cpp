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
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
//=======================
const int MOD = 1'000'000'007;
const int N = 2e6 + 13;
//=======================
vi g[N];
// int a[N];
//=======================
ll getSum(vi &v)
{
  ll sum = 0;
  for (auto x : v)
  {
    sum += x;
  }
  return sum;
}
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
void solve(int k)
{
  int n;
  cin >> n;
  ll a[n + 1];
  ll sum = 0;
  Fo(i, n)
  {
    a[i] = exp(i, k);
    sum += a[i];
  }
  ll target1 = sum / 2;
  ll target2 = ceil(sum / 2.0);
  ll target3 = sum / 2;
  ll target4 = ceil(sum / 2.0);
  if (k == 1)
  {
    if (sum % 2 == 0)
    {
      cout << 0 << endl;
    }
    else
    {
      cout << 1 << endl;
    }

    string s = "";
    for (int i = n; i >= 1; i--)
    {
      if (a[i] <= target1)
      {
        s += "1";
        target1 -= a[i];
      }
      else
      {
        s += "0";
      }
    }
    reverse(s.begin(), s.end());
    cout << s
         << endl;
    return;
  }
  if (k == 2)
  {
    ll sum1 = 0;
    ll sum2 = 0;
    vi v1;
    vi v2;
    for (int i = n; i >= 1; i--)
    {
      if (sum1 <= sum2)
      {
        sum1 += a[i];
        v1.push_back(a[i]);
      }
      else
      {
        sum2 += a[i];
        v2.push_back(a[i]);
      }
    }

    if (v1.size() < v2.size())
    {
      for (int i = 1; i <= v2.size() - v1.size(); i++)
        v1.push_back(0);
    }
    if (v2.size() < v1.size())
    {
      for (int i = 1; i <= v1.size() - v2.size(); i++)
        v2.push_back(0);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    ll _min = abs(sum1 - sum2);
    for (int i = 0; i < v1.size(); i++)
    {
      for (int j = 0; j < v2.size(); j++)
      {
        swap(v1[i], v2[j]);
        ll val1 = getSum(v1);
        ll val2 = getSum(v2);
        if (abs(val1 - val2) > _min)
        {
          swap(v1[i], v2[j]);
        }
        else
        {
          _min = min(_min, abs(val1 - val2));
        }
      }
    }
    // ll _min = abs(getSum(v1) - getSum(v2));
    cout << _min << endl;
    string s = "";
    for (int i = 1; i <= n; i++)
    {
      if (find(v2.begin(), v2.end(), a[i]) != v2.end())
      {
        s += "1";
      }
      else
      {
        s += "0";
      }
    }
    cout << s << endl;
    return;
  }
  cout << 1 << endl;
}

int main()
{
  jaldi
      // #ifndef ONLINE_JUDGE
      //       freopen("input.txt", "r", stdin);
      //   freopen("output.txt", "w", stdout);
      // #endif
      int t = 1;
  int k;
  cin >> k >> t;

  while (t--)
  {
    solve(k);
  }

  return 0;
}
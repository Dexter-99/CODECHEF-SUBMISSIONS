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
#define Fo(i, n) for (int i = 1; k <= n; i++)
#define f_range(l, r) for (int i = l; i < r; i++)
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
typedef pair<ll, ll> pii;
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
  string s;
  ll a, b, q;
  cin >> s >> a >> b >> q;
  //   map<pii, int> mp;
  pii curr = {a, b};
  ll L = 0;
  ll R = 0;
  ll U = 0;
  ll D = 0;
  fo(i, s.length())
  {
    if (s[i] == 'L')
      L++;
    if (s[i] == 'R')
      R++;
    if (s[i] == 'U')
      U++;
    if (s[i] == 'D')
      D++;
  }
  while (q--)
  {
    ll p1, p2;
    cin >> p1 >> p2;
    int pos = 0;
    pii dest = {p1, p2};
    ll xCount = dest.F - curr.F;
    ll yCount = dest.S - curr.S;
    if (xCount == 0 && yCount == 0)
    {
      cout << "YES 0" << endl;
      continue;
    }
    int sum = 0;
    if ((xCount > 0) && (R >= xCount))
    {
      sum++;
    }
    if (xCount < 0 && L >= abs(xCount))
    {
      L--;
      sum++;
    }
    if (yCount > 0 && U >= yCount)
    {
      U--;
      sum++;
    }
    if (yCount < 0 && D >= abs(yCount))
    {
      D--;
      sum++;
    }
    if (sum == 0)
    {
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES " << sum << endl;
    }
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

  while (t--)
  {
    solve();
  }

  return 0;
}
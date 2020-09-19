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
#define REP(l, r) for (int i = l; i < r; i++)
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
//=======================
vi g[N];
int a[N];
//=======================

void solve()
{
  int n;
  string s;
  cin >> n >> s;
  int i = 0;
  while (i < n)
  {
    if (i == 0 && s[i] == '1')
    {
      s[i] = 'b';
      if (s[i + 1] != '1')
        s[i + 1] = 'b';
    }
    else if (i == n - 1 && s[i] == '1')
    {
      s[i] = 'b';
      if (s[i - 1] != '1')
        s[i - 1] = 'b';
    }
    else if (s[i] == '1')
    {
      s[i] = 'b';
      if (s[i - 1] != '1')
        s[i - 1] = 'b';
      if (s[i + 1] != '1')
        s[i + 1] = 'b';
    }
    i++;
  }
  int count = 0;
  fo(i, n) if (s[i] == '0')
      count++;
  cout << count << endl;
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

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
// int a[N];
//=======================

void solve()
{
  string s1, s2;
  cin >> s1 >> s2;
  string res = "";
  int a[26] = {0};
  fo(i, s1.length())
  {
    a[s1[i] - 'a']++;
  }
  fo(i, s2.length())
  {
    a[s2[i] - 'a']--;
  }
  int idx = 0;
  for (int i = 1; i < s2.length(); i++)
  {
    if (s2[idx] != s2[i])
    {
      idx = i;
      break;
    }
  }
  // cout << s2[idx] << " ";
  fo(i, 26)
  {

    if (i <= s2[idx] - 'a')
    {
      for (int j = 0; j < a[i]; j++)
        res += (char)(97 + i);
    }
    if ((s2[0] - 'a') == i)
    {
      res += s2;
    }
    if (i > s2[idx] - 'a')
    {
      for (int j = 0; j < a[i]; j++)
        res += (char)(97 + i);
    }
  }
  cout << res << endl;
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
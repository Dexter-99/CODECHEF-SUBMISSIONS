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
int a[N];
//=======================
unordered_map<string, int> memo;
int coll[1000][1000];
int result(int i, int j, int cost)
{
  string ij = to_string(i) + to_string(j);

  if (memo.find(ij) != memo.end())
  {
    return memo[ij];
  }
  if (i == j)
  {
    memo[ij] = cost;
    return cost;
  }
  int min_cost = cost + coll[ij];
  for (int k = i; k < j; k++)
  {
    int left_cost = INT32_MAX;
    int right_cost = INT32_MAX;
    string left = to_string(i) + to_string(j);
    string right = to_string(i) + to_string(j);

    if (memo.find(left) != memo.end())
    {
      left_cost = memo[left];
    }
    if (memo.find(right) != memo.end())
    {
      right_cost = memo[right];
    }
    if (left_cost == INT_MAX)
      left_cost = result(i, k, cost);
    if (right_cost == INT_MAX)
      right_cost = result(k + 1, j, cost);

    min_cost = min(min_cost, left_cost + right_cost);
  }

  memo[ij] = min_cost;
  return memo[ij];
}
void solve()
{
  int n, k;
  cin >> n >> k;
  // int eff = INT32_MAX;
  fo(i, n)
  {
    cin >> a[i];
  }
  if (n == 1)
  {
    cout << k << endl;
    return;
  }
  if (k == 1)
  {
    set<int> h;
    for (int i = 0; i < n; i++)
    {
      if (h.find(a[i]) != h.end())
      {
        h.clear();
        k++;
        // cou     // << k << endl;
      }
      h.insert(a[i]);
      // cout << h.size() << endl;
    }
    cout << k << endl;
    return;
  }
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    mp.clear();
    int collisions = 0;
    for (int j = i; j < n; j++)
    {
      mp[a[j]] += 1;
      if (mp[a[j]] == 2)
      {
        collisions += 2;
        coll[i][j] = collisions;
        continue;
      }
      if (mp[a[j]] > 2)
      {
        collisions += 1;
        coll[i][j] = collisions;
      }
    }
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      cout << dp[i][j] << "  ";
    }
    cout << endl;
  }

  // int dp[n][n] = {0};
  // for (int i = 0; i < n; i++)
  //   dp[i][i] = k;

  // for (int len = 1; len < n; len++)
  // {
  //   for (int i = 0; i + len < n; i++)
  //   {
  //     int j = i + len;
  //     int res = mp[to_string(i) + to_string(j)];
  //     dp[i][j] = k + res;
  //     for (int m = i; m < j; m++)
  //     {
  //       dp[i][j] = min(dp[i][j], dp[i][m] + dp[m + 1][j]);
  //     }
  //   }
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < n; j++)
  //   {
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  cout << result(0, n - 1, k) << endl;
  coll.clear();
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
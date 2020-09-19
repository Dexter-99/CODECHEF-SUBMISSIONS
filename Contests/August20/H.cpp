/**
 * CODE
 * BY
 * VIKAS VERMA
*/
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
// vi g[N];
// int a[N];
//=======================
void addEdge(vi adj[], int u, int v)
{
  adj[u].PB(v);
  adj[v].PB(u);
}
void removeEdge(vi adj[], int u, int v)
{

  auto it1 = find(adj[u].begin(), adj[u].end(), v);
  if (it1 != adj[u].end())
    adj[u].erase(it1);

  auto it2 = find(adj[v].begin(), adj[v].end(), u);
  if (it2 != adj[v].end())
    adj[v].erase(it2);
}

vi reachable(vi adj[], int src, int v)
{
  vi list;
  // if (adj[src].size() == 0)
  //   return list;
  bool visited[v + 1] = {0};
  queue<int> q;
  visited[src] = 1;
  q.push(src);
  while (!q.empty())
  {
    int node = q.front();
    q.pop();
    list.PB(node);
    for (int x : adj[node])
    {
      if (!visited[x])
      {
        visited[x] = 1;
        q.push(x);
      }
    }
  }
  return list;
}
void solve()
{
  int n;
  cin >> n;
  vi adj[n + 1];
  for (int i = 0; i < n - 1; i++)
  {
    int a, b;
    cin >> a >> b;
    addEdge(adj, a, b);
  }
  int perm[n];
  int a[n];
  int b[n];
  fo(i, n)
          cin >>
      perm[i];
  fo(i, n)
          cin >>
      a[i];
  fo(i, n)
          cin >>
      b[i];
  unordered_map<int, pii> mp;
  fo(i, n)
  {
    mp.insert({i + 1, {a[i], b[i]}});
    ;
  }

  //========================

  // for (int i = 0; i < n; i++)
  // {

  //   int _min = min(mp[perm[i]].F, mp[perm[i]].F);
  //   // cout << _min;
  //   mp[perm[i]] = {a[i], b[i] - _min};
  // }
  int days[n + 1] = {0};
  for (int i = 0; i < n; i++)
  {
    vi nodes = reachable(adj, perm[i], n + 1);
    for (int j = 0; j < nodes.size(); j++)
    {
      cout << nodes[j] << " ";
      int _min = min(mp[perm[i]].F, mp[nodes[j]].S);
      mp[nodes[j]] = {mp[nodes[j]].F, mp[nodes[j]].S - _min};
    }
    cout << endl;
    // clearing the roads
    for (int j = 1; j <= n; j++)
    {
      removeEdge(adj, perm[i], j);
    }
    for (int j = 1; j <= n; j++)
    {
      if (mp[j].second == 0 && days[j] == 0)
        days[j] = i + 1;
    }
    // cout << endl;
  }
  for (int i = 1; i <= n; i++)
  {

    cout << (days[i] == 0 ? -1 : days[i]) << " ";
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
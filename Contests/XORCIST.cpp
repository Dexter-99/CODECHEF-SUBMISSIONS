#include <iostream>
using namespace std;
#define ll long long
ll rangeQuery(int qs, int qe, int ss, int se, ll tree[], int si)
{
  if (qs > se || ss > qe)
    return 0;
  else if (qs <= ss && qe >= se)
    return tree[si];
  int mid = (ss + se) / 2;
  return rangeQuery(qs, qe, ss, mid, tree, 2 * si + 1) ^ rangeQuery(qs, qe, mid + 1, se, tree, 2 * si + 2);
}
ll segTree(int ss, int se, ll tree[], ll a[], int si)
{
  if (ss == se)
  {
    tree[si] = a[ss];
    return a[ss];
  }
  int mid = (ss + se) / 2;
  tree[si] = segTree(ss, mid, tree, a, 2 * si + 1) ^ segTree(mid + 1, se, tree, a, 2 * si + 2);
  return tree[si];
}
int main()
{
  int t, n, q, l, r;
  cin >> t;
  while (t--)
  {
    cin >> n >> q;
    ll a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    ll tree[4 * n];
    segTree(0, n - 1, tree, a, 0);
    while (q--)
    {
      cin >> l >> r;
      cout << rangeQuery(l - 1, r - 1, 0, n - 1, tree, 0) << endl;
    }
  }
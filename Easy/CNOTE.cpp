#include <iostream>
using namespace std;
int main()
{
  int t, x, y, k, n, p, c;
  cin >> t;
  while (t--)
  {
    cin >> x >> y >> k >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> p >> c;
      a[i] = {p, c};
    }
    int rem = x - y;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
      if (a[i].first >= rem && a[i].second <= k)
      {
        flag = true;
        break;
      }
    }
    cout << (flag ? "LuckyChef" : "UnluckyChef") << endl;
  }
  return 0;
}
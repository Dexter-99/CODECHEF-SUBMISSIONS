#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    int a[n], foul, res = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      a[i] *= 20;
    }
    for (int i = 0; i < n; i++)
    {
      cin >> foul;
      a[i] -= (foul * 10);
      res = max(a[i], res);
    }
    cout << res << "\n";
  }
  return 0;
}
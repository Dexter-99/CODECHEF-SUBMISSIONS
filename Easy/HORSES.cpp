//ACCEPTED
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
    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    sort(a, a + n);
    int res = INT32_MAX;
    for (int i = 1; i < n; i++)
      res = min(res, a[i] - a[i - 1]);
    cout << res << "\n";
  }
  return 0;
}
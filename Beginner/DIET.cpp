#include <iostream>
using namespace std;
int main()
{
  int t, n, k, pro, day;
  cin >> t;
  while (t--)
  {
    cin >> n >> k;
    int store = 0, a[n], day = -1;
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
    {
      if (a[i] + store < k)
      {
        day = i + 1;
        break;
      }
      else
      {
        store += a[i] - k;
      }
    }
    if (day == -1)
      cout << "YES"
           << "\n";
    else
      cout << "NO " << day << "\n";
  }
  return 0;
}
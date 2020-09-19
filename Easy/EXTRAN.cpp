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
    int i;
    for (i = 1; i < n; i++)
    {
      if (a[i] - a[i - 1] != 1)
        break;
    }
    if (i == n - 1)
      cout << a[i] << endl;
    else
      cout << a[i - 1] << endl;
  }
  return 0;
}
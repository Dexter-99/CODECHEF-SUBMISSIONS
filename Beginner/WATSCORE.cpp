#include <iostream>
using namespace std;
int main()
{
  int t, n, idx, val;
  cin >> t;
  while (t--)
  {
    cin >> n;
    int a[12] = {0};
    for (int i = 0; i < n; i++)
    {
      cin >> idx >> val;
      if (a[idx] == 0)
        a[idx] = val;
      else
      {
        if (val > a[idx])
          a[idx] = val;
      }
    }
    int count = 0;
    for (int i = 1; i <= 11; i++)
      if (i < 9)
        count += a[i];
    cout << count << "\n";
  }
  return 0;
}
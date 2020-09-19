#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int t, n, k;
  cin >> t;
  while (t--)
  {
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    sort(a, a + n);
    int fsum = 0;
    int ssum = 0;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
      if (i < k)
      {
        ssum += a[i];
        fsum += a[n - 1 - i];
      }
      total += a[i];
    }

    cout << max(abs(fsum - (total - fsum)), abs(ssum - (total - ssum))) << "\n";
  }
  return 0;
}
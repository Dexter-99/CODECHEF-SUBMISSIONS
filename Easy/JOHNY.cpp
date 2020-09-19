#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int t, n, pos, i;
  cin >> t;
  while (t--)
  {
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    cin >> pos;
    int val = a[pos - 1];
    sort(a, a + n);
    for (i = 0; i < n; i++)
    {
      if (val == a[i])
        break;
    }
    cout << i + 1 << "\n";
  }
  return 0;
}

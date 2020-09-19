#include <iostream>
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
    int mi = INT32_MAX;
    for (int i = 0; i < n; i++)
      mi = min(mi, a[i]);
    cout << mi << endl;
  }
  return 0;
}
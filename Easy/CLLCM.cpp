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
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
      if (a[i] % 2 == 0)
      {
        flag = false;
        break;
      }
    }
    if (flag)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
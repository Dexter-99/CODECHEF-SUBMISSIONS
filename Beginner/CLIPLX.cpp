#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int t, x, y;
  cin >> t;
  while (t--)
  {
    cin >> x >> y;
    if (x <= 5)
      cout << 1 << endl;
    else
    {

      cout << x - y << endl;
    }
  }
  return 0;
}
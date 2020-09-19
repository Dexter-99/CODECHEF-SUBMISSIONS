//ACCEPTED
#include <iostream>
using namespace std;
int main()
{
  int t, a, b, c, d;
  cin >> t;
  while (t-- > 0)
  {
    cin >> a >> b >> c >> d;
    bool flag = false;
    if (a == b && c == d)
      flag = true;
    if (a == c && b == d)
      flag = true;
    if (a == d && b == c)
      flag = true;
    cout << (flag ? "YES" : "NO")
         << "\n";
  }
}
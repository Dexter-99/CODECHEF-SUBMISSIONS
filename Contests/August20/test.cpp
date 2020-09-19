#include <iostream>
using namespace std;
int32_t main()
{
  int x = 4;
  bool res = (x == 5) || (x++);
  cout << res << " " << x << endl;
  return 0;
}
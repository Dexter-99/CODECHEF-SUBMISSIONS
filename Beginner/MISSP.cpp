//ACCEPTED
#include <iostream>
using namespace std;
int main()
{
  int t, n;
  cin >> t;
  while (t-- > 0)
  {
    cin >> n;
    int res = 0;
    int doll;
    while (n-- > 0)
    {
      cin >> doll;
      res ^= doll;
    }
    cout << res << "\n";
  }
  return 0;
}
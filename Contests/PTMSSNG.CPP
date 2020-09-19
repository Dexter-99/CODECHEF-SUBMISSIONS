#include <iostream>
using namespace std;
int main()
{
  int t, n, p, q;
  cin >> t;
  while (t--)
  {
    cin >> n;
    int res1 = 0;
    int res2 = 0;
    int val = 4 * n - 1;
    while (val--)
    {
      cin >> p >> q;
      res1 ^= p;
      res2 ^= q;
    }
    cout << res1 << " " << res2 << endl;
  }

  return 0;
}
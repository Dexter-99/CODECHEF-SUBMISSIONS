//ACCEPTED
#include <iostream>
#define REP(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
int main()
{

  int t, n, maxI, maxR, res;
  cin >> t;
  while (t--)
  {
    cin >> n;
    int l[n], r[n];
    REP(i, 0, n - 1)
    cin >> l[i];
    REP(i, 0, n - 1)
    cin >> r[i];
    maxI = -1;
    maxR = 0;
    res = 0;
    REP(i, 0, n - 1)
    {
      int prod = l[i] * r[i];
      if (prod >= res && r[i] > maxR)
      {
        maxI = i + 1;
        res = prod;
        maxR = r[i];
      }
    }
    cout << maxI << "\n";
  }
  return 0;
}
#include <iostream>
using namespace std;
#define maxN 100000
static int a[maxN + 1];
int lastDig(int n)
{
  int val = n % 10;
  return (val == 2 || val == 3 || val == 9);
}
int main()
{
  int t, l, r;
  cin >> t;
  while (t--)
  {
    cin >> l >> r;
    a[0] = 0;
    for (int i = 1; i <= maxN; i++)
    {
      a[i] = a[i - 1] + lastDig(i);
      // cout << a[i] << " ";
    }
    cout << a[r] - a[l - 1] << "\n";
  }
}

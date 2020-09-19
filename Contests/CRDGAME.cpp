#include <iostream>
using namespace std;

int sum(int n)
{
  int sum = 0;
  while (n > 0)
  {
    sum += n % 10;
    n = n / 10;
  }
  return sum;
}
int main()
{
  int t, n, a, b;
  cin >> t;
  while (t--)
  {
    cin >> n;
    int c = 0;
    int m = 0;
    while (n--)
    {
      cin >> a >> b;
      if (sum(a) > sum(b))
        c++;
      else if (sum(a) < sum(b))
        m++;
      else
      {
        c++;
        m++;
      }
    }
    if (c > m)
      cout << 0 << " " << c << endl;
    else if (m > c)
      cout << 1 << " " << m << endl;
    else
      cout << 2 << " " << c << endl;
  }
  return 0;
}
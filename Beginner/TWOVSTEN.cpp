//ACCEPTED
#include <iostream>
using namespace std;
int count(int n)
{
  if (n % 5 != 0)
    return -1;
  int c = 0;
  while (n % 10 != 0)
  {
    c++;
    n <<= 1;
  }
  return c;
}
int main()
{
  int t, n;
  cin >> t;
  while (t-- > 0)
  {
    cin >> n;
    cout << count(n) << "\n";
  }
  return 0;
}
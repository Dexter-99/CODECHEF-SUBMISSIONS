#include <iostream>
using namespace std;
int main()
{
  int t;
  long long n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    while (n % 10 == 0 && n != 20)
    {
      n = n / 10;
    }
    while (n % 20 == 0)
    {
      n = n / 20;
    }
    cout << (n == 1 ? "Yes" : "No") << endl;
  }
  return 0;
}
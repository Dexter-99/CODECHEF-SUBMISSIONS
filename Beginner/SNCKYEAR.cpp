#include <iostream>
using namespace std;
int main()
{
  int t, year;
  cin >> t;
  while (t-- > 0)
  {
    cin >> year;
    if (year == 2010 || year == 2015 || year == 2016 || year == 2017 || year == 2019)
      cout << "YES"
           << "\n";
    else
      cout << "NO"
           << "\n";
  }
  return 0;
}
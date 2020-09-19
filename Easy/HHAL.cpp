#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int t;
  string s;
  cin >> t;
  while (t--)
  {
    cin >> s;
    string str = s;
    reverse(s.begin(), s.end());
    if (s == "")
    {
      cout << 0 << endl;
    }
    else if (str == s)
      cout << 1 << endl;
    else
      cout << 2 << endl;
  }
  return 0;
}
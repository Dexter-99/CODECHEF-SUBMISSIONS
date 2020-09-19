#include <iostream>
using namespace std;
int main()
{
  int t;
  string s;
  cin >> t;
  ;
  while (t--)
  {
    cin >> s;
    string res1 = s.substr(1) + s[0];
    string res2 = s[s.length() - 1] + s.substr(1, s.length() - 1);
    cout
        << (res1 == res2 ? "YES" : "NO") << endl;
  }
  return 0;
}
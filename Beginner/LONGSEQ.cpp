#include <iostream>
using namespace std;
int main()
{
  int t;
  string s;
  cin >> t;
  while (t--)
  {
    cin >> s;
    int ze = 0;
    int on = 0;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == '1')
        on++;
      else
        ze++;
    }
    if (ze == 1 || on == 1)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
  return 0;
}
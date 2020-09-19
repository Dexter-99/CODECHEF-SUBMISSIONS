#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] >= 48 && s[i] <= 57)
        sum += s[i] - 48;
    }
    cout << sum << "\n";
  }
  return 0;
}
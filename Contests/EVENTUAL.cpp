#include <iostream>
using namespace std;
int main()
{
  int t, n;
  string s;
  cin >> t;
  while (t--)
  {
    cin >> n >> s;
    int a[26];
    for (int i = 0; i < s.length(); i++)
    {
      a[s[i] - 'a']++;
    }
    int i;
    for (int i = 0; i < 26; i++)
    {
      if (a[i] % 2 != 0)
        break;
    }
    cout << ((i == 26) ? "YES" : "NO") << endl;
  }
}
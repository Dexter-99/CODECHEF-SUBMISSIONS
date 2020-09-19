#include <iostream>
using namespace std;
int main()
{
  int t, n;
  cin >> t;
  string s1, s2;
  while (t--)
  {
    cin >> n >> s1 >> s2;
    int z = 0;
    int o = 0;
    for (int i = 0; i < s1.length(); i++)
    {
      if (s1[i] - 48)
        o++;
      else
        z++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
      if (s2[i] - 48)
        o--;
      else
        z--;
    }
    if (o == 0 && z == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string ch[3];
    for (int i = 0; i < 3; i++)
        cin >> ch[i];
    bool flag = false;
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        if (ch[i][j] == 'l' && ch[i + 1][j] == 'l' && ch[i + 1][j + 1] == 'l')
        {
          flag = true;
          break;
        }
      }
    }
    cout << (flag ? "yes" : "no") << endl;
  }
  return 0;
}
#include <iostream>
using namespace std;
int main()
{
  int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    cout << 'O';
    n = n - 1;
    for (int i = 0; i < 8; i++)
    {
      int j = 0;
      while (j < 8)
      {
        if (i == 0 && j == 0)
        {
          j++;
          continue;
        }
        if (n > 0)
        {
          while (n > 0&&j<8)
          {
            cout << ".";
            n--;
            j++;
          }
        }
        else
        {
          cout << "X";
          j++;
        }
      }
      cout << "\n";
    }
    cout << endl;
  }
  return 0;
}
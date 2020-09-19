#include <iostream>
using namespace std;
int main()
{
  int t, n;
  cin >> t;
  string s;
  while (t--)
  {
    cin >> n >> s;
    int c = 0;
    for (int i = 0; i < n; i++)
      if (s[i] == '1')
        c++;
    cout << (c * (c + 1) / 2) << "\n";
  }
  return 0;
}
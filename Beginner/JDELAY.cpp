#include <iostream>
using namespace std;
int main()
{
  int t, n, s, j;
  cin >> t;
  while (t--)
  {
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> s >> j;
      if (j - s > 5)
        count++;
    }
    cout << count << "\n";
  }
  return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    int a[n];
    int minSal = -1;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      minSal = max(minSal, a[i]);
    }
    int moves = 0;
    for (int i = 0; i < n; i++)
      moves += minSal - a[i];
    cout << moves << "\n";
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, p1, p2, k;
  cin >> t;
  while (t--)
  {
    cin >> p1 >> p2 >> k;
    int val = floor((p1 + p2) / k);
    if (val % 2)
      cout << "COOK"
           << "\n";
    else
      cout << "CHEF"
           << "\n";
  }
  return 0;
}
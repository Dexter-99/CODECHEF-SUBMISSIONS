#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    sort(a, a + n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
      if (a[i] == 0)
        total++;
      else if (total >= a[i])
        total++;
    }
    cout << total << "\n";
  }
  return 0;
}
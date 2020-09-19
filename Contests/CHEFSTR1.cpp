#include <iostream>
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
    {
      cin >> a[i];
    }
    long long int sum = 0;
    for (int i = 1; i < n; i++)
    {

      int diff = abs(a[i] - a[i - 1]);
      sum += (long long)(diff - 1);
    }
    cout << sum << endl;
  }
  return 0;
}
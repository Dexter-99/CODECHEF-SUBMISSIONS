#include <iostream>
#define ll long long
using namespace std;
int main()
{
  int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    ll a[n];
    ll mi = 100000;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      mi = min(a[i], mi);
    }
    cout << mi * (long)(n - 1) << endl;
  }
  return 0;
}
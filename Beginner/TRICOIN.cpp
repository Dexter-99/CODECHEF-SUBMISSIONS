#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int main()
{
  int t;
  ll n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    ll res = sqrt(8 * n + 1);
    res -= 1;

    res /= 2;
    cout << res << endl;
  }
  return 0;
}
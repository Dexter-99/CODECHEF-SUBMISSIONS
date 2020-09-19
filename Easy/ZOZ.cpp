#include <iostream>
#define ll long long
using namespace std;
int main()
{
  int t, n;
  ll k;
  cin >> t;
  while (t--)
  {
    cin >> n >> k;
    ll a[n];
    ll sub_sum[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      sum += a[i];
    }
    for (int i = 0; i < n; i++)
    {
      sub_sum[i] = sum - a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      if (a[i] + k > sub_sum[i])
        count++;
    }
    cout << count << endl;
  }
  return 0;
}
#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <cmath>
#define ll long long
using namespace std;
int main()
{
  int t, n;
  ll x, val;
  cin >> t;
  while (t--)
  {
    cin >> n >> x;
    vector<ll> v;
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> val;
      if (x > val * 2)
        count++;
      else
        v.push_back(val);
    }
    sort(v.begin(), v.end(), greater<int>());
    while (v.size() != 0)
    {
      if (x >= v.back())
      {
        x = v.back() * 2;
        // cout << x << " ";
        v.pop_back();
      }
      else
      {
        x = x * 2;
      }
      count++;
    }
    // cout << endl;
    cout << count << endl;
  }

  return 0;
}

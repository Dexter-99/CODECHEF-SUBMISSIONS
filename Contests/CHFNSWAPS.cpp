#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
int main()
{
  int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    int a[n];
    int b[n];
    int xr = 0;
    int minmum=INT32_MAX;
    unordered_map<int, int> m1;
    unordered_map<int, int> m2;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      xr ^= a[i];
      m1[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];
      xr ^= b[i];
      m2[b[i]]++;
    }
    if (xr != 0)
    {
      cout << -1 << endl;
      continue;
    }
    vector<int> v1;
    vector<int> v2;
    for (auto x : m1)
    {

      cout << x.first << " " << m2[x.first] << x.second << endl;
    }
    for (auto x : m2)
    {

      cout << x.first << " " << (m1[x.first]) << x.second << endl;
    }
    for (int x : v1)
    {
      cout << x << " ";
    }
    for (int x : v2)
    {
      cout << x << " ";
    }
    // if (v1.size() == 0 || v2.size() == 0)
    // {
    //   cout << 0 << endl;
    //   continue;
    // }
    // if (v1.size() != v2.size())
    // {
    //   cout << -1 << endl;
    //   continue;
    // }
    // sort(v1.begin(), v1.end());
    // sort(v2.begin(), v2.end(), greater<int>());
    // int out = 0;
    // for (int i = 0; i < v1.size(); i++)
    //   out += min(v1[i], v2[i]);
    // cout << out << endl;
    return 0;
  }
}
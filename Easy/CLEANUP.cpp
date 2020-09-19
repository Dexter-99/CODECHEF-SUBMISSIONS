#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  int t, n, k, val;
  vector<int> v;
  vector<int> ch;
  vector<int> as;
  cin >> t;
  while (t--)
  {
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
      cin >> val;
      v.push_back(val);
    }
    int init = 0;
    for (int i = 1; i <= n; i++)
    {
      if (find(v.begin(), v.end(), i) == v.end())
      {
        if (init++ % 2)
        {
          as.push_back(i);
        }
        else
        {
          ch.push_back(i);
        }
      }
    }
    for (auto it = ch.begin(); it != ch.end(); it++)
      cout << *(it) << " ";
    cout << endl;
    for (auto it = as.begin(); it != as.end(); it++)
      cout << *(it) << " ";
    cout << endl;
    v.clear();
    ch.clear();
    as.clear();
  }
  return 0;
}
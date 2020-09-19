#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
  int t, n;
  cin >> t;
  unordered_set<int> h;
  while (t--)
  {
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      int val;
      cin >> val;
      h.insert(val);
    }
    cout << h.size() << "\n";
    h.clear();
  }

  return 0;
}
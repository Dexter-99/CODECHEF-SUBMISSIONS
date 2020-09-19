#include <iostream>
#include <unordered_set>
#define set unordered_set<string>
using namespace std;
int main()
{
  set h;
  int t;
  string s;
  cin >> t;
  while (t--)
  {
    cin >> s;
    for (int i = 0; i < s.length() - 1; i++)
    {
      h.insert(s.substr(i, 2));
    }
    cout << h.size() << endl;
    h.clear();
  }
  return 0;
}

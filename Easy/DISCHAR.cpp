#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
  int t;
  string s;
  unordered_set<char> h;
  cin >> t;
  while (t--)
  {
    cin >> s;
    for (int i = 0; i < s.length(); i++)
      h.insert(s[i]);
    cout << h.size() << endl;
    h.clear();
  }
  return 0;
}
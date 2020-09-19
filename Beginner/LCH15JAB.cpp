#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
  int t;
  string s;
  cin >> t;
  while (t--)
  {
    cin >> s;
    int a[26] = {0};
    for (int i = 0; i < s.length(); i++)
      a[s[i] - 'a']++;
    bool flag = false;
    for(int )
    cout << (flag ? "YES" : "NO") << endl;
  }

  return 0;
}
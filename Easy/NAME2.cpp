#include <iostream>
using namespace std;
bool isSub(string s1, string s2)
{
  int j = 0;
  for (int i = 0; i < s2.length(); i++)
  {
    if (s2[i] == s1[j])
      j++;
  }
  return (j == s1.length());
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s1, s2;
    cin >> s1 >> s2;
    cout << (isSub(s1, s2)||isSub(s2,s1) ? "YES" : "NO") << endl;
  }
  return 0;
}
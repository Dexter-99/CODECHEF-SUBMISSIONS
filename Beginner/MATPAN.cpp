#include <iostream>
#define ll long long int
using namespace std;
int main()
{
  int t;
  string s;
  cin >> t;
  while (t--)
  {
    int a[26] = {0};
    int vis[26] = {0};
    for (int i = 0; i < 26; i++)
      cin >> a[i];
    cin >> s;
    for (int i = 0; i < s.length(); i++)
      vis[s[i] - 'a']++;
    ll cost = 0;
    for (int i = 0; i < 26; i++)
    {
      if (!vis[i])
        cost += (ll)a[i];
    }
    cout << cost << endl;
  }
  return 0;
}
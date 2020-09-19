//ACCEPTED
#include <iostream>
using namespace std;
int main()
{
  int t, n, k, num;
  cin >> t;
  while (t--)
  {
    cin >> n >> k;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> num;
      num += k;
      if (!(num % 7))
        count++;
    }
    cout << count << "\n";
  }
}
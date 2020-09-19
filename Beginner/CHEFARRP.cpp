//ACCEPTED
#include <iostream>
using namespace std;
int main()
{
  int t, n;
  cin >> t;
  while (t--)
  {
    cin >> n;
    int a[n];
    int count = 0;
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
    {
      int prod = 1;
      int sum = 0;
      for (int j = i; j < n; j++)
      {
        sum += a[j];
        prod *= a[j];
        count += (sum == prod);
      }
    }
    cout << count << "\n";
  }
  return 0;
}
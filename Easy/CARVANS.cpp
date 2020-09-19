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
    int aux[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    aux[0] = a[0];
    for (int i = 1; i < n; i++)
    {
      aux[i] = min(aux[i - 1], a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      count += (a[i] == aux[i]);
    }
    cout << count << endl;
  }
  return 0;
}
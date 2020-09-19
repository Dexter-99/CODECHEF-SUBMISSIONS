//ACCEPTED
#include <iostream>
using namespace std;
int main()
{
  int t, a, b;
  cin >> t;
  while (t--)
  {
    cin >> a >> b;
    int ar[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    long long sum = a + b;
    int count = 0;
    while (sum)
    {
      count += ar[sum % 10];
      sum /= 10;
    }
    cout << count << "\n";
  }
  return 0;
}
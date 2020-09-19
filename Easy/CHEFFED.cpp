#include <iostream>
#define ll long long
using namespace std;
ll sum(ll n)
{
  ll sum = 0;
  while (n > 0)
  {
    sum += n % 10;
    n = n / 10;
  }
  return sum;
}
int main()
{
  ll n;
  cin >> n;
  ll a = n-97;
  int count = 0;
  while (a <= n)
  {
    if (a + sum(a) + sum(sum(a)) == n)
      count++;
    a++;
  }
  cout << count << endl;
  return 0;
}
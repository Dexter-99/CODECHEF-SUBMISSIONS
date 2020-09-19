#include <iostream>
using namespace std;
int main()
{
  int x = 1;
  cout << x << "\n";
  fflush(stdout);
  int y;
  cin >> y;
  cout << (x ^ y) << "\n";
  fflush(stdout);
}
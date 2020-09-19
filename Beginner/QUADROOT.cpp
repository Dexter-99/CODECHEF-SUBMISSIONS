#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
  double a, b, c;
  cin >> a >> b >> c;
  double D = (b * b) - (4 * a * c);
  double x1 = (-b + sqrt(D)) / (2 * a);
  double x2 = (-b - sqrt(D)) / (2 * a);
  cout << fixed << setprecision(6) << x1 << endl;
  cout << fixed << setprecision(6) << x2 << endl;
  return 0;
}
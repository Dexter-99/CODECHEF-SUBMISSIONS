#include <iostream>
using namespace std;
int main()
{
  int l, b;
  cin >> l >> b;
  int ar = l * b;
  int pr = 2 * (l + b);
  if (ar > pr)
    cout << "Area"
         << "\n"
         << ar << endl;
  else if (pr > ar)
    cout << "Peri"
         << "\n"
         << pr << endl;
  else

    cout << "Eq"
         << "\n"
         << ar << endl;

  return 0;
}
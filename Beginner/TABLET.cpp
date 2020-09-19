//ACCEPTED
#include <iostream>
using namespace std;
int main()
{
  int t, n, w, h, p, b;
  cin >> t;
  while (t--)
  {
    cin >> n >> b;
    int ar = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> w >> h >> p;
      if (p <= b)
      {
        ar = max(ar, (w * h));
      }
    }
    if (ar != 0)
      cout << ar << "\n";
    else
      cout << "no tablet"
           << "\n";
  }
}
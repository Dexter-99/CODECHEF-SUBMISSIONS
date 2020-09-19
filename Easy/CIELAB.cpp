//ACCEPTED
#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cin >> a >> b;
  string str = to_string(a - b);
  char ch;
  for (int i = 1; i <=9; i++)
  {
    if (i != str[0] - 48)
    {
      ch = i + 48;
      break;
    }
  }
  cout << ch + str.substr(1) << "\n";
  return 0;
}
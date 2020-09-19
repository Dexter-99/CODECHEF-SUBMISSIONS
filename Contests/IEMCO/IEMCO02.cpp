#include <iostream>
using namespace std;
int main()
{
  string s, str;
  for (int i = 0; i < 6; i++)
  {
    cin >> s;
    str += s;
  }
  double sum = 0;
  for (int i = 0; i < 6; i++)
  {
    string com;
    com += ((char)(65 + i));
    com += "Cov";
    if (str.find(com) != string::npos)
      sum += 0.5;
    string ann;
    ann += '(';
    ann += ((char)(65 + i));
    ann += ')';
    if (str.find(ann) != string::npos)
      sum += 0.5;
    // cout << com << " " << ann << endl;
  }
  cout << sum << " out of 6" << endl;
  return 0;
}
#include <iostream>
using namespace std;
#define ll long long
int main()
{
  int t, n, q, k, b, c, val;
  cin >> n >> q;
  int h[n + 1];
  int ing[n + 1];
  for (int i = 1; i <= n; i++)
  {
    cin >> h[i];
  }
  for (int i = 1; i <= n; i++)
  {
    cin >> ing[i];
  }
  while (q--)
  {
    cin >> t >> b >> c;
    ll output = 0;
    bool flag = true;
    if (t == 1)
    {
      ing[b] = c;
    }
    else
    {
      if (b == c)
      {
        cout << ing[b] << endl;
        continue;
      }
      else if (b > c)
      {
        int ptr = b;
        while (ptr != c)
        {
          // cout << ptr << endl;
          output += (long)ing[ptr];
          int setPtr = -1;
          int maxH = 1e9;
          for (int i = ptr - 1; i >= c; i--)
          {
            if (h[ptr] > h[i])
            {
              if (h[ptr] - h[i] <= maxH)
              {
                maxH = min(maxH, (h[ptr] - h[i]));
                setPtr = i;
              }
            }
            else
              break;
          }
          if (setPtr == -1)
          {
            flag = false;
            break;
          }
          ptr = setPtr;
        }
        output += (long)ing[ptr];
      }
      else if (b < c)
      {
        int ptr = b;
        while (ptr != c)
        {
          output += (long)ing[ptr];
          int setPtr = -1;
          int maxH = 1e9;
          for (int i = ptr + 1; i <= c; i++)
          {
            if (h[ptr] > h[i])
            {
              if (h[ptr] - h[i] <= maxH)
              {
                maxH = min(maxH, (h[ptr] - h[i]));

                setPtr = i;
              }
            }
            else
            {
              break;
            }
          }
          if (setPtr == -1)
          {
            flag = false;
            break;
          }
          ptr = setPtr;
        }
        output += (long)ing[ptr];
      }
      if (!flag)
        cout << -1 << endl;
      else
        cout << output << endl;
    }
  }
  return 0;
}
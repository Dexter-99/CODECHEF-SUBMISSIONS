/**
 * CODE
 * BY
 * VIKAS VERMA
 * 
 * $$Always Check for Constraints
*/
#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, n) for (int i = 1; i <= n; i++)
#define fr(i, n) for (ll i = n - 1; i >= 0; i--)
#define REP(l, r) for (int i = l; i < r; i++)
#define printclock cerr << "Time : " << 1000 * (ld)clock() / (ld)CLOCKS_PER_SEC << "ms\n"
#define jaldi ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626
#define endl "\n"
#define F first
#define S second
#define PB push_back
#define MP make_pair
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef long long ll;
//=======================
const int MOD = 1'000'000'007;
const int N = 2e6 + 13;
//=======================
vi g[N];
int a[N];
//=======================

void solve()
{
  int n;
  cin >> n;
  int a[n + 1];
  Fo(i, n)
          cin >>
      a[i];
  int _min = INT32_MAX;
  int _max = INT32_MIN;
  //   vector<int> v;
  for (int i = 1; i <= n; i++)
  {

    double inf[n + 1];

    for (int j = 1; j <= n; j++)
      inf[j] = -1.0;

    inf[i] = 0.0;
    //   cout<<i<<"infected hai"<<endl;
    for (int j = 1; j <= n; j++)
    {
      if (inf[j] >= 0.0)
      {
        for (int k = 1; k <= n; k++)
        {

          if (inf[k] <= (-1.0))
          {
            if (a[j] - a[k] != 0)
            {
              double t = (double)(k - j) / (double)(a[j] - a[k]);
              //  cout<<j<<","<<k<<"->"<<t<<endl;
              if (t >= 0.0 && (t >= inf[j]))
              {
                inf[k] = t;
              }
            }
          }
        }
        //   cout<<endl;
      }
    }
    for (int j = 1; j <= n; j++)
    {
      if (inf[j] >= 0.0)
      {
        for (int k = 1; k <= n; k++)
        {

          if (inf[k] <= (-1.0))
          {
            if (a[j] - a[k] != 0)
            {
              double t = (double)(k - j) / (double)(a[j] - a[k]);
              //  cout<<j<<","<<k<<"->"<<t<<endl;
              if (t >= 0.0 && (t >= inf[j]))
              {
                inf[k] = t;
              }
            }
          }
        }
        //   cout<<endl;
      }
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
      if (inf[i] != -1.0)
      {
        count++;
        //   cout<<inf[i]<<" ";
      }
      //   else
      //   {
      //       cout<<0<<" ";
      //   }
    }
    //   cout<<endl;
    _min = min(_min, count);
    _max = max(_max, count);
  }
  cout << _min << " " << _max << endl;
}

int main()
{
  jaldi
#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t = 1;

  cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}

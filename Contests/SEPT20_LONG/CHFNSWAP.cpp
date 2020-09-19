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
  ll n;
  cin>>n;
//   ll a[n+1];
//   Fo(i, n)
//       a[i] = i;
      if((n+3)%4==0||(n+2)%4==0)
      {
          cout<<0<<endl;
          return;
      }
  ll sum=n*(n+1)/2;
//   if(sum&1)
//   {
//       cout<<0<<endl;
//       return;
//   }
//   sum/=2;
//   ll prefixSum[n+1]={0};
//   prefixSum[1]=a[1];
//   for(int i=2;i<=n;i++)
//   {
//       prefixSum[i]=prefixSum[i-1]+a[i];
//   }
//   auto it=lower_bound(prefixSum,prefixSum+n+1,sum);
double D=sqrt(1+(4*sum));
  double val=(-1.0+D)/2.0;
  if(ceil(val)!=floor(val))
  {
      cout<<(ll)(n-floor(val))<<endl;
  }
  else
  {
      ll  diff=n-val;
      cout<<diff*(diff+1)/2+((ll)val*((ll)val-1)/2)<<endl;
  }
//   ll val=it-prefixSum;
//   if(*it==sum)
//   {
//       ll  diff=n-val;
//       cout<<diff*(diff+1)/2+(val*(val-1)/2)<<endl;
//   }
//   else
//   {
//     cout<<n-val+1<<endl;  
//   }
  
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
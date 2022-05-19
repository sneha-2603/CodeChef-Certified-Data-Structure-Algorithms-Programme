// Greedy
// 3. MAXDIFF
 
#include<bits/stdc++.h>
using namespace std;
#define     ll       long long
const ll  mod = 1e9+7;
 
int main()
{   
  ll t;
  cin>>t;
  while(t--)
  { ll n,k;
    cin>>n>>k;
    ll a[n];
    ll sum1=0,sum2=0;
    for(ll i=0;i<n;i++)
      cin>>a[i];
    sort(a,a+n);
    k=min(k,n-k);// to find maximum difference
    for(ll i=0;i<k;i++)
      sum1+=a[i];
    for(ll i=k;i<n;i++)
      sum2+=a[i];
    cout<<abs(sum1-sum2)<<endl;
  }
 
return 0;
 
}
  

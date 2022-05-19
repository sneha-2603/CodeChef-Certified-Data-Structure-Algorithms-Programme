// Greedy
// 1.TACHSTCK
 
#include<bits/stdc++.h>
using namespace std;
#define     ll       long long
const ll  mod = 1e9+7;
 
int main()
{   
 
  ll n,d;
  cin>>n>>d;
  ll a[n];
  ll c=0;
  for(ll i=0;i<n;i++)
    cin>>a[i];
  sort(a,a+n);
  for(ll i=0;i<n;)
  {
    if(abs(a[i]-a[i-1])<=d)
     { i+=2;// got pair 
      c++;}
      else
        i++;
  }
  cout<<c<<endl;
 
return 0;
 
}
  

// Greedy
// 4.CHEFST
 
#include<bits/stdc++.h>
using namespace std;
#define     ll       long long
const ll  mod = 1e9+7;
 
int main()
{   
  ll t;
  cin>>t;
  while(t--)
  { ll n1,n2,m;
    cin>>n1>>n2>>m;
   // max unit =1+2+3...m==m(m+1)/2
   // as we remove same number so minus 2*x
   ll x= min(m*(m+1)/2,min(n1,n2));
   cout<<n1+n2-2*x<<endl;


  }
 
return 0;
 
}
  

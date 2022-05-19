// Greedy
// 2.CIELRCPT
 
#include<bits/stdc++.h>
using namespace std;
#define     ll       long long
const ll  mod = 1e9+7;
 
int main()
{   
  ll t;
  cin>>t;
  while(t--)
  { ll p;
    cin>>p;
    ll c=0;
    if(p>2048)
    {
      ll x=p/2048;
      p=p-(2048*x);// to make p <2048
      c=x;
    }
    while(p!=0)
    {


   ll y= 1<<__builtin_ctz(p);//find highest power of 2 that is divisior of x
   p=p-y;
   c++;
 }
 cout<<c<<endl;
  }
 
return 0;
 
}
  

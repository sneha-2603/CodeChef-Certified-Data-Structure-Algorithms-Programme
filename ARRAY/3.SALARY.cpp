// Arrray
// 3.SALARY

#include<bits/stdc++.h>
using namespace std;
#define     ll       long long
const ll  mod = 1e9+7;

int main()
{   
  
   ll t;
   cin>>t;

   while(t--)
   {

    ll n;
    cin>>n;
   
    ll w[n];
    for(ll i=0;i<n;i++)
    {
     cin>>w[i];

    }
    
    sort(w,w+n);
    ll y=w[0];// min element
    // already same  == output 0
    if(w[0]==w[n-1])
        cout<<0<<endl;
    else
    {  
    //steps to make particular element equal to y
        ll sum=0;

        for(ll i=0;i<n;i++)
            sum+=w[i]-y;
        // print total steps
        cout<<sum<<endl;
    }
  
 }

return 0;

}
 

// Arrray
// 4.CHN15A

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

    ll n,k;
    cin>>n>>k;
   
    ll w[n];
    for(ll i=0;i<n;i++)
    {
     cin>>w[i];

    }
    ll ct=0;
    // divisibility rule of 7 states
    // (remaining no-2*unit digit) %7==0
    for(ll i=0;i<n;i++)
    {
        ll y=w[i]+k;

        ll a=y%10;
        ll  b =y/10;
        if((b-(2*a))%7==0)
        ct++; 
    }
    cout<<ct<<endl;
   
  
 }

return 0;

}
 

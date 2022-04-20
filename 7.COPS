// Arrray
// 7.COPS

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
    ll M,x,y;
    cin>>M>>x>>y;
    ll z=x*y;
 
    ll b[101];
    // mark every room non visited
    for(ll i=1;i<=100;i++)
        b[i]=0;

   ll c[M];
     for(ll i=1;i<=M;i++)
     { cin>>c[i];}

        for(ll i=1;i<=M;i++)
        {
            // mark those which are visited by cops
        for(ll j=c[i]+1;j<=100&&j<=(c[i]+z);j++)
        b[j]=1;
       for(ll j=c[i];j>=(c[i]-z)&&j>0;j--)
        b[j]=1;
     }
     ll ct=0;
     // count those which are non visited
     for(ll i=1;i<=100;i++)
     {
        if(b[i]==0)
         
            ct++;
     }
     cout<<ct<<endl;
   

   
 }

return 0;

}
 

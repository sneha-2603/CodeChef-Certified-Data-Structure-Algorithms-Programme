// Arrray
// 5.RAINBOWA

#include<bits/stdc++.h>
using namespace std;
#define     ll       long long
const ll  mod = 1e9+7;

int main()
{   
  
   ll t;
   cin>>t;
  while(t--)
   { ll n;
    cin>>n;
    ll a[n];

    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll ct=0;
    ll p=0;
    ll i=0;
    ll y;
  vector<pair<ll,ll>>v;
  // count occurance of number
 while(i<n)
    {    y=a[i];
        ct=0;

        while(y==a[i]&&i<n)
        {
            i++;
            ct++;
        }
      
     
        v.push_back({y,ct});
        
       
        
    }
    // cout<<v.size()<<endl; 
    if(v.size()!=13)
    {
        p=1;
       
    }
    // chck for inc.order (1,2,3..)
    for(ll i=0;i<7;i++)
    {
        if(v[i].first!=i+1)
        { p=1;
            break;
        }
    }
    // chck for inc.order (1,2,3..) after 7 
   //chck for frequency in first and second half=== v[i].second!=v[12-i].second
    for(ll i=7;i<13;i++)
    { 
        if(v[i].first!=13-i||v[i].second!=v[12-i].second)
        {
            p=1;
            break;
        }
    }
     if(p==1)
        cout<<"no"<<endl;
    else
        cout<<"yes"<<endl;
    
     
   

   
 }

return 0;

}
 

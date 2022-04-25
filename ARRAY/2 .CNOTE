// Arrray
// 2 .CNOTE

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

    ll x,y,k,n;
    cin>>x>>y>>k>>n;
   
vector<pair<ll,ll>>v;
ll p,c;
    for(ll i=0;i<n;i++)
    {
        cin>>p>>c;
        // make prize a first item so as to make sorting easy
      v.push_back( make_pair(c,p));
    }
   
  ll z=x-y;
  bool lucky=false;
//sort acc. to prize
 sort(v.begin(),v.end());
 for(auto it:v)
 {
    if(it.first <=k&&it.second>=z)
    {
        lucky=true;
        break;
    }
 }
 cout<<(lucky==true?"LuckyChef":"UnluckyChef")<<endl;

    

 }

return 0;

}
 

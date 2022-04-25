// Arrray
// 6.FRGTNLNG

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
   string a[n];
   vector<string>v[k];
   for(ll i=0;i<n;i++)
    cin>>a[i];
ll l;

for(ll i=0;i<k;i++)
{ cin>>l;
    for(ll j=0;j<l;j++)
    { string st;
        cin>>st;
        // to store string 
        v[i].push_back(st);
    }
}
 string ans ="NO";
  for(ll i=0;i<n;i++)
  {  ans="NO";
    for(ll j=0;j<k;j++)
    {
     for(ll m=0;m<v[j].size();m++)
        {
            if(v[j][m]==a[i])
               ans="YES";
            
        }
  } 
   cout<<ans<<" ";
  }
  cout<<endl;
 }

return 0;

}

//---------------------------------
// using map

   while(t--)
   {

    ll n,k;
    cin>>n>>k;
   string a[n];
   map<string ,int>m;
    
 
   for(ll i=0;i<n;i++)
    {
    cin>>a[i];
        m[a[i]]++;}
ll l;
for(ll i=0;i<k;i++)
{
   cin>>l;
    for(ll j=0;j<l;j++)
    {  string st;
       cin>>st;
       // inc count of match word
       m[st]++;
    }
  } 
  
  for(ll i=0;i<n;i++)
  {
    if(m[a[i]]>1)
        cout<<"YES"<<" ";
    else
        cout<<"NO"<<" ";
  }
  cout<<endl;
 }


 
 

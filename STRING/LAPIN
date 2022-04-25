// STRING
// 2.LAPIN

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
  string s;
  cin>>s;
  ll n=s.length();
  ll p=0;
  ll l=n/2;
  ll r=l;
  // if odd then inc the right partion by one
  if(n%2!=0)
    r++;
// divide string into two parts
string s1=s.substr(0,l);
string s2=s.substr(r,n);
// sort them to compare
sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());

if(s1==s2)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;


  //---------------------------------
  // 2nd method
  // make frequency array to compare

  ll ml[26]={0};
  ll mr[26]={0};
for(ll i=0;i<n/2;i++)
    ml[s[i]-'a']++;
for(ll i=(n+1)/2;i<n;i++)
    mr[s[i]-'a']++;
for(ll j=0;j<26;j++)
{
    if(ml[j]!=mr[j])
    {
        p=1;
        break;
    }
}
     if(p==1)
     cout<<"NO"<<endl;
     else
     cout<<"YES"<<endl;
}

return 0;

}
 

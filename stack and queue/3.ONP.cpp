// stack &queue
// 3.ONP

#include<bits/stdc++.h>
using namespace std;
#define     ll       long long
const ll  mod = 1e9+7;

int main()
{   
   int t;
   cin>>t;
   while(t--)
   {
string s;
cin>>s;
vector<char>v;
ll n=s.length();
for(ll i=0;i<n;i++)
{  // if + ,*,/,^,- then insert it in vector
    if(s[i]!=')'&&(isalpha(s[i])==0)&&s[i]!='(')
        v.push_back(s[i]);
 // if alphabhet then print it
 else if(s[i]!='('&&s[i]!=')')
cout<<s[i];
// if encounter closing bracket then print it from reverse
else if(s[i]==')')
{ 
    cout<<v.back();
    v.pop_back();
}
}
    
cout<<endl;
   }

return 0;

}
 

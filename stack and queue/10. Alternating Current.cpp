// stack &queue
//10. Alternating Current

#include<bits/stdc++.h>
using namespace std;
#define     ll       long long
const ll  mod = 1e9+7;

int main()
{   
string s;
cin>>s;
ll n=s.length();

stack<char>st;
   
   
for(ll i=0;i<n;i++)
{
    if(st.empty()||st.top()!=s[i])
    {
       st.push(s[i]);
    }
   
    else
    {
        st.pop();
    }
}
cout<<(st.empty()?"YES":"NO")<<endl;
  

return 0;

}
 

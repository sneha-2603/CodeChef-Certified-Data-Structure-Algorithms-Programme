// stack &queue
//09.Minimal string

#include<bits/stdc++.h>
using namespace std;
#define     ll       long long
const ll  mod = 1e9+7;

int main()
{   
string s;
cin>>s;
ll n=s.length();

ll i;
stack<char>st;
string t=s;
string str=" ";// to store the final string

for( i=n-2;i>=0;i--)
  t[i]=min(t[i],t[i+1]);
   
   
for(ll i=0;i<n;i++)
{
    while(!st.empty()&&st.top()<=t[i])
    {
        str+=st.top();
        st.pop();
    }
    if(s[i]==t[i])
    {
    str+=s[i];
    }
    else
    {
        st.push(s[i]);
    }
}
// for remaining characters
    while(!st.empty())

   {
        str+=st.top();
        st.pop();
    }
    cout<<str<<endl;

return 0;

}
 

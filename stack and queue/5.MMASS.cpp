// stack &queue
// 5.MMASS

#include<bits/stdc++.h>
using namespace std;
#define     ll       long long
const ll  mod = 1e9+7;

int main()
{   
  
string s;
cin>>s;
stack<int>st;
vector<char>v;
ll n=s.length();

map<char,int>m;
  m['C'] = 12;
    m['H'] = 1;
    m['O'] = 16;
    m['('] = -1;
    m[')'] = 0;
    
for(ll i=0;i<n;i++)
{  
    if(s[i]=='(')
     st.push(m[s[i]]);

else if(s[i]==')')
   {  ll  y=m[')'];
      ll sum=0;

    while(y!=m['('])
    {
        y=st.top();
        st.pop();
       if(y!=m['(']) sum+=y;
    }
    st.push(sum);
}
   else if(s[i]=='C'||s[i]=='H'|| s[i]=='O')
    st.push(m[s[i]]);
else
{  ll y=st.top();
    st.pop();
    st.push(y*(int)(s[i]-'0'));

   }
}

ll ans=0;
while(!st.empty())
{
    ans+=st.top();
    st.pop();

}

cout<<ans<<endl;

return 0;

}
 

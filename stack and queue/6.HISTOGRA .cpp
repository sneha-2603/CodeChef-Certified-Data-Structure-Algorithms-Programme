// stack &queue
// 6.HISTOGRA 
 
#include<bits/stdc++.h>
using namespace std;
#define     ll       long long
const ll  mod = 1e9+7;
 
int main()
{   
 
ll n;
while(1)
{ 
    cin>>n;
    if(n==0)
        break;
ll a[n];
for(ll i=0;i<n;i++)
cin>>a[i];
stack<ll>st;
ll i=0, ans=0;
while(i<n)
{
    if(st.empty()||a[st.top()]<=a[i])
        st.push(i++);
    else 
    {
        ll y=st.top();
        st.pop();
        ans=max(ans,a[y]*(st.empty()?i:i-st.top()-1));
    }
 
 
}
while(!st.empty())
{
 
        ll y=st.top();
        st.pop();
        ans=max(ans,a[y]*(st.empty()?i:i-st.top()-1));
    
}
cout<<ans<<endl;
}
 
 
 
return 0;
 
}
  

// stack &queue
// 7.Maximum Xor Secondary

#include<bits/stdc++.h>
using namespace std;
#define     ll       long long
const ll  mod = 1e9+7;

int main()
{ ll n;
cin>>n;
  stack<ll>st;
ll ans=0;
for(ll i=0;i<n;i++)
{ ll x;

    cin>>x;
    while(!st.empty())
    {
        ans=max(ans,x^st.top());// find xor of every element and then find max ans.
        if(st.top()>x)
            break;

        st.pop();
    }
    st.push(x); 

}
cout<<ans<<endl;

return 0;

}

// stack &queue
// 2.STPAR - Street Parade
 
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
ll i=0,ll k=1;

while(i<n)
{
    if(a[i]==k)
    {
        k++;i++;
    }
    else if(!st.empty()&&st.top()==k)
      {  st.pop();
        k++;
    }
    else
       { st.push(a[i]);
        i++;
    }
}

     
while(!st.empty()&&st.top()==k)
{
 k++;
        st.pop();
        
    
}
if(k==(n+1)&&st.empty())
    cout<<"yes"<<endl;
else
    cout<<"no"<<endl;
}
 
 
 
return 0;
 
}
  

// stack &queue
//8.ANARC09A

#include<bits/stdc++.h>
using namespace std;
#define     ll       long long
const ll  mod = 1e9+7;

int main()
{   
string s;
ll k=1;
while(1)
{    
 cin>>s;
ll n=s.length();
if(s[0]=='-')
    break;
stack<char>st;
   ll c=0,a=0,b=0;
for(ll i=0;i<n;i++)
{ 
    
    if(s[i]=='{')
    {
       st.push(s[i]);
    }
   
    else if(!st.empty()&&st.top()=='{')
        st.pop();
    else
        st.push(s[i]);
    

}

while(!st.empty())
{
    if(st.top()=='}')
        a++;
    else
        b++;
    st.pop();
} 
if(a%2==0&&b%2==0)
c+=(a+b)/2;
else
c+=(a+b)/2+1;

cout<<k<<"."<<" "<<c<<endl;
  k++;
}

return 0;

}
 

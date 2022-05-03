// stack &queue
//11.Longest Regular Bracket Sequence

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
vector<ll>a(n,0);
stack<ll>st;
ll max=0,c=0;
for( i=0;i<n;i++)
{ // insert position coz we have to find the length of longest sequence
  if(s[i]=='(')
    {st.push(i);
        continue;
    }
    if(st.empty())
        continue;
 ll y=st.top();
 st.pop();
 a[i]=i-y+1+(y-1>=0?a[y-1]:0);// check that previous one i.e.y-1 exist or not
  // then calculate max ans
if(max<a[i])
{
    max=a[i];
    c=1;
}
else if(a[i]==max)
{
    c++;// counter for counting the no of longest sequence
}
}
if(max==0)
    cout<<0<<" "<<1;
else
    cout<<max<<" "<<c;


return 0;

}
 

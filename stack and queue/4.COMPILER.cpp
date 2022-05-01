// stack &queue
// 4.COMPILER

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
stack<char>k;
vector<char>v;
ll n=s.length();
ll c=0;
ll p=0;
ll i;
for( i=0;i<n;i++)
{  
    if(s[i]=='<')
  k.push(s[i]);

else 
{
    if(k.empty())
    break;
  // pop it till all pairs are pooped
     k.pop();
      if(k.empty())
        p=i;// store the length

}
}
if(p==0)
    cout<<0<<endl;
else
 cout<<p+1<<endl;
     
     
     
 //(without stack)----------------------------------
     // match the pair
//     if(s[i]=='<')
//         c++;
//     else if(s[i]=='>')
//         c--;
//     // if c==0 means we have found the pair<>
//      if(c==0)
//         p=i+1; // store the position (length)
//    else if(c<0)
//     { 
        
//         break;

//     }
    
// }

// cout<<p<<endl;
 
   }

return 0;

}
 

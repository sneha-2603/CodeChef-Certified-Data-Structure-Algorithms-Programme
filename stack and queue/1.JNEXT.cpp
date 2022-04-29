// stack &queue
// 1.JNEXT

#include<bits/stdc++.h>
using namespace std;
#define     ll       long long
const ll  mod = 1e9+7;

int main()
{   
  
   ll t;
   cin>>t;
  while(t--)
   { ll n;
    cin>>n;
    ll a[n];
    ll p,q,qq,pp;
    for(ll i=0;i<n;i++)
        cin>>a[i];
        
    // use of next permutation -------------------------------
bool x = next_permutation(a, a+n);
        if(x)
        {
            for(int i=0; i<n; i++)
                cout<<a[i];
        }
        else
            cout<<-1;
        cout<<endl;
        
        
// 2nd mthd ------------------------------


    ll i=n-1;
    // find smallest element from right
    while(i>0&&a[i-1]>=a[i])
        i--;
//  // if sorted in descending order means already greatest

    if(is_sorted(a,a+n,greater<>())&&i==0)
    { cout<<-1<<endl;
    }
    
    
   
    else
    {  ll j=n-1;
        while(a[i-1]>=a[j])
            
                j--;
              
    
       swap(a[i-1],a[j]);
    reverse(a+i,a+n);
    for(ll i=0;i<n;i++)
        cout<<a[i];
    cout<<endl;
}
    
}
 //using stack--------------------------------------
 

return 0;

}
 

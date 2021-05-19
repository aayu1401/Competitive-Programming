#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int 
#define vi vector<int>
#define vl vector<ll>
#define vvll vector<pair<ll,ll>>
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define frr(i,a,b) for(ll i=a;i>=b;i--)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fi first
#define se second
#define lb(a,b) lower_bound(a.begin(),a.end(),b)
#define ub(a,b) upper_bound(a.begin(),a.end(),b)
#define st(a) sort(a.begin(),a.end());
#define s(a) a.size()
#define o_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
 
using namespace __gnu_pbds;
using namespace std;
int main()
{
    ll n,p=0;
    cin>>n;
    vector<ll>a,b;
    p=(n*(n+1))/2;
    if(p%2!=0)
    cout<<"NO"<<endl;
    else
    { cout<<"YES"<<endl; 
    if(n%2!=0)
   {b.pb(n); n--;}
    
       for(ll i=1;i<=n/2;i+=2)
        { a.pb(i);a.pb(n-i+1);
            
        }
        for(ll i=2;i<=n/2;i+=2)
        { b.pb(i);b.pb(n-i+1);
            
        }
        
        
        cout<<a.size()<<endl;
        fr(i,0,a.size())
        cout<<a[i]<<" ";
        cout<<endl;
         cout<<b.size()<<endl;
        fr(i,0,b.size())
        cout<<b[i]<<" ";
        cout<<endl;
    }
   
}

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int 
#define vi vector<int>
#define vl vector<ll>
#define vvll vector<pair<ll,ll>>
#define fr(i,a,b) for(int i=a;i<b;i++)
#define frr(i,a,b) for(int i=a;i>=b;i--)
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
#define ook(k) order_of_key(k)
#define foo(k) find_by_order(k)

 
using namespace __gnu_pbds;
using namespace std;
 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {  int n,k,p=1,q,r;
    cin>>n>>k;
    vector<int>a;
    string s;
    cin>>s;
    fr(i,0,n)
    {
        if(s[i]=='*')
        a.pb(i);
    }
    if(a.size()<=1)
    cout<<a.size()<<endl;
    else
    {
        q=a[0];
        while(q<n+2)
        {
            if(q>=a[a.size()-1])
            break;
            r=upper_bound(a.begin(),a.end(),q+k)-a.begin();
            q=a[r-1];p++;
          
        }cout<<p<<endl;
    }
    
   
    }
}
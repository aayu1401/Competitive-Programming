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
 
using namespace __gnu_pbds;
using namespace std;
ll power(ll a,ll b)
{ if(b==0)
return 1;
   else if(b%2==0)
    return power((a*a)%1000000007,b/2);
    else
    return (a*power((a*a)%1000000007,b/2))%1000000007;
    
}
int main()
{  int t;
cin>>t;
while(t--)
{
    ll a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
}
}
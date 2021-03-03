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
 
int main()
{   ll n,s=0,p,q,r,t,u;
cin>>n; r=sqrt(n);
for(ll i=1;i<r+1;i++)
{ u=n/i;
u%=1000000007;
    p=(u*(1+ u))/2;
p%=1000000007;
q=(i*(i+1))/2;
q%=1000000007;
t=(u-i+1)*i;
t%=1000000007;
s+=t+p-q;
s%=1000000007;   
 
} cout<<s<<endl;
}
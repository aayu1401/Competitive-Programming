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
 void func( vector<ll>g[],ll n,ll dp1[],ll dp2[],pair<ll,ll>a[],ll node,ll q)
 {
     dp1[node]=0;
     dp2[node]=0;
  
     for(int i=0;i<g[node].size();i++)
     { if(g[node][i]==q) continue;
         func(g,n,dp1,dp2,a,g[node][i],node);
dp1[node]+=max(dp1[g[node][i]]+abs(a[node].first-a[g[node][i]].first),dp2[g[node][i]]+abs(a[node].first-a[g[node][i]].second));
dp2[node]+=max(dp1[g[node][i]]+abs(a[node].second-a[g[node][i]].first),dp2[g[node][i]]+abs(a[node].second-a[g[node][i]].second));         
     }
         
 }

int main()
{    ios_base::sync_with_stdio(false);    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    { ll n,l,r,u,v,m=0,p=-1,s=0;
    cin>>n;
    pair<ll,ll>a[n];
    ll dp1[n],dp2[n];
    vector<ll>g[n];
    fr(i,0,n)
    {  cin>>l>>r;
    a[i]=mp(l,r);
    dp1[i]=-1,dp2[i]=-1;
    }
    fr(i,0,n-1)
    {
        cin>>u>>v;
        g[u-1].pb(v-1);
        g[v-1].pb(u-1);
    }
    func(g,n,dp1,dp2,a,s,p);
    cout<<max(dp1[0],dp2[0])<<"\n";
   
 
}}
#include<bits/stdc++.h>
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

using namespace std;

 ll tree[800005]={0};
 void build(ll node,ll l,ll r,ll a[])
 { 
     if(l==r)
     tree[node]=a[l];
     else
     {
         ll m=(l+r)/2;
         build(2*node,l,m,a);
         build(2*node+1,m+1,r,a);
         tree[node]=min(tree[2*node],tree[2*node+1]);
     }
 }
 ll min(ll node,ll start,ll end,ll l,ll r)
 {
     if(r<start || l>end)
     return LONG_MAX;
     if(l<=start && end<=r)
     return tree[node];
     ll mid=(start+end)/2;
     ll a=min(2*node,start,mid,l,r);
     ll b=min(2*node+1,mid+1,end,l,r);
     return min(a,b);
 }
  ll upd(ll node,ll start,ll end,ll pos,ll val, ll a[])
 {
     if(start==end)
     { a[pos]=val;
     tree[node]=val;
         
     }
     else{
     ll mid=(start+end)/2;
     if(pos>=start && pos<=mid)
     upd(2*node,start,mid,pos,val,a);
     else
     upd(2*node+1,mid+1,end,pos,val,a);
     tree[node]=min(tree[2*node],tree[2*node+1]);
     
     
     }
 }
 
int main()
{   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll n,l,r,q,k;
   cin>>n>>q;
   ll a[n];
   fr(i,0,n)
   cin>>a[i];
   build(1,0,n-1,a);
   fr(i,0,q)
   { 
       cin>>k>>l>>r;
       if(k==2)
       cout<<min(1,0,n-1,l-1,r-1)<<endl;
       else
       upd(1,0,n-1,l-1,r,a);
   }
}
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
{
    int t;
    cin>>t;
    while(t--)
    { ll n,m,nm=0,pm=0;
    cin>>n>>m;
    vector<ll>p,q,r,s;
    ll a[n],b[m];
    fr(i,0,n)
    {
        cin>>a[i];
        if(a[i]<0)
        p.pb(abs(a[i]));
        else
        q.pb(a[i]);
    }
    fr(i,0,m)
    {
        cin>>b[i];
        if(b[i]<0)
        r.pb(abs(b[i]));
        else
        s.pb(b[i]);
    } 
    ll c[r.size()]={0},k[s.size()]={0};
    st(p);st(q);st(r);st(s);
    int x=p.size()-1,y=r.size()-1;
    while(x>=0&& y>=0)
    {
        if(p[x]==r[y])
        {c[y]++;
        if(y<r.size()-1)
        c[y]+=c[y+1];
        x--;y--;}
        else if(p[x]>r[y])
        x--;
        else 
        {  if(y<r.size()-1)
            c[y]+=c[y+1];
        y--;
        }
    }
    x=q.size()-1;y=s.size()-1;
    while(x>=0&& y>=0)
    {
        if(q[x]==s[y])
        {k[y]++;
        if(y<s.size()-1)
        k[y]+=k[y+1];
        x--;y--;}
        else if(q[x]>s[y])
        x--;
        else 
        {  if(y<s.size()-1)
            k[y]+=k[y+1];
        y--;
        }
    } 
    
for(ll i=0;i<s.size();i++)
{  ll z= upper_bound(q.begin(),q.end(),s[i])-q.begin();
ll h=upper_bound(s.begin(),s.end(),s[i]-z)-s.begin();
h=i-h+1;
if(i<s.size()-1)
h+=k[i+1];

pm=max(pm,h);
    
} 
for(ll i=0;i<r.size();i++)
{  ll z= upper_bound(p.begin(),p.end(),r[i])-p.begin();
ll h=upper_bound(r.begin(),r.end(),r[i]-z)-r.begin();
h=i-h+1;
if(i<r.size()-1)
h+=c[i+1];
nm=max(nm,h);
    
}  cout<<nm+pm<<endl; 
    }
}
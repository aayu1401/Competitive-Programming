
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
 
ll gcd(ll a, ll b)
{
    if(a==0)
    return b;
    else if(b==0)
    return a;
    else if(a>b)
    return gcd(b,a%b);
    else
    return gcd(b%a,a);
} 
vector <int> bfs(vector<int> g[], int N) {
vector<int>a;
queue<int>b;
bool c[N]={false};
b.push(0);
c[0]=true;
while(!b.empty())
{ int p=b.front();

a.push_back(p);
for(int i=0;i<g[p].size();i++)
{ if(c[g[p][i]]==false)
   { b.push(g[p][i]);
       c[g[p][i]]=true;}
   }
    
    b.pop();
}
return a;
}
ll dij(ll x , ll y , vvll a[],ll n)
{
    ll dist[n],c,d;
    fr(i,0,n)
    dist[i]=LONG_MAX;
    dist[x]=0;
    bool b[n]={false};
    multiset<pair<ll,ll>>s;
    pair<ll,ll>p;
    s.insert({x,0});
    while(!s.empty())
    { p=*s.begin();
    s.erase(s.begin());
    c=p.first; d=p.second;
    if(b[c]==true)
    continue;
    fr(j,0,a[c].size())
    {
        if(dist[c]+a[c][j].second< dist[a[c][j].first])
        {
            dist[a[c][j].first]=dist[c]+a[c][j].second;
            s.insert({a[c][j].first,dist[a[c][j].first]});
        }
    }
        
    }
    if(dist[y]==LONG_MAX)
    return -1;
    return dist[y];
}
bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first==b.first)
     return (a.second<b.second);
    return (a.first<b.first);
   
}
int main()
{ll n,sum=0,b;
    cin>>n;
    vvll a;
    fr(i,0,n)
    {
        cin>>b;sum+=b;a.pb(mp(b,i));
    } st(a);
   bool dp[n+1][sum +1];
   fr(i,0,n+1)
   {
       fr(j,0,sum+1)
       {
           if(j==0 )
           dp[i][j]=1;
           else if(i==0)
           dp[i][j]=0;
           else
           {
               if(j<a[i-1].first)
               dp[i][j]=dp[i-1][j];
               else 
               dp[i][j]=(dp[i-1][j]||dp[i-1][j-a[i-1].first]);
               
           }
       }
   }
 if((sum%2)!=0 || dp[n][sum/2]==false)
 cout<<0<<endl;
 else
 { int y=0;
 while(y!=1)
 {
     fr(i,0,n)
     { if(a[i].first%2!=0)
     { y=1;cout<<1<<endl;
     cout<<a[i].second+1<<endl;break;
     }
     }
     fr(i,0,n)
     {
         a[i].first/=2;
     }
     
 }
     
 }

}
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
 
 
int main()
{   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  ll n,m,a,b,c;
   cin>>n>>m;
   vector<pair<ll,ll>>g[n];
   bool d[n]={false};
  fr(i,0,m)
  {
      cin>>a>>b>>c;
      g[a-1].pb(mp(b-1,c));
  }
   multiset<pair<ll,ll>>s;
   ll dis[n];
   fr(i,0,n)
   { d[i]=false;
   dis[i]=LONG_MAX;
   }
   dis[0]=0;
   s.insert(mp(0,0));
   while(!s.empty())
   {
       ll x=((*s.begin()).second);
       s.erase(s.begin());
       if(d[x]==true)
       continue;
       d[x]=true;
       fr(i,0,g[x].size())
       {
           if(dis[x]!=LONG_MAX && dis[x]+g[x][i].second<dis[g[x][i].first])
           {
              dis[g[x][i].first] =dis[x]+g[x][i].second;
              s.insert(mp(dis[g[x][i].first],g[x][i].first));
           }
       }
   }
   fr(i,0,n)
   cout<<dis[i]<<" ";
   cout<<endl;
   
 
}
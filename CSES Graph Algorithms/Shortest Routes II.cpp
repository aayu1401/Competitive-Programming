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
  ll n,m,a,b,c,q;
   cin>>n>>m>>q;
  ll g[n][n];
  fr(i,0,n)
  {
      fr(j,0,n)
      {
          if(i==j)
          g[i][j]=0;
          else
          g[i][j]=LONG_MAX;      }
  }
   fr(i,0,m)
   {
       cin>>a>>b>>c;
       g[a-1][b-1]=min(g[a-1][b-1],c);
       g[b-1][a-1]=min(c,g[b-1][a-1]);
   }
   fr(k,0,n)
   {
       fr(i,0,n)
       {
           fr(j,0,n)
           {
               if(g[i][k]!=LONG_MAX && g[k][j]!=LONG_MAX)
               g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
           }
       }
   }
   fr(i,0,q)
   {
       cin>>a>>b;
       if(g[a-1][b-1]==LONG_MAX && g[b-1][a-1]==LONG_MAX)
       cout<<-1<<endl;
       else
       cout<<min(g[a-1][b-1],g[b-1][a-1])<<endl;
   }
 
}
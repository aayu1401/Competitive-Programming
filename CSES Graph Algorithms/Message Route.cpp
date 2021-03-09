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
   int n,m,a,b;
   cin>>n>>m;
   vector<int>g[n];
   bool c[n]={false};
  fr(i,0,m)
  {
      cin>>a>>b;
      g[a-1].pb(b-1);
      g[b-1].pb(a-1);
  }
  
          queue<int>q;
         
          q.push(0);
          c[0]=true;
          int parent[n];
          parent[0]=-1;
          while(!q.empty())
          {
              int x=q.front();
              if(x==n-1)
              { vector<int>y;
                 y.pb(x+1);
                 while(x>0)
                 {
                     x=parent[x];
                     y.pb(x+1);
                 }
                 cout<<y.size()<<endl;
                 reverse(y.begin(),y.end());
                 fr(i,0,y.size())
                 cout<<y[i]<<" ";
                 cout<<endl;
                  
                  return 0;
              }
              q.pop();
              fr(j,0,g[x].size())
              {
                  if(c[g[x][j]]==false)
                  { 
                      q.push(g[x][j]);
                      c[g[x][j]]=true;
                      parent[g[x][j]]=x;
                  }
              }
          }
      
  cout<<"IMPOSSIBLE"<<endl;
 
   
 
}
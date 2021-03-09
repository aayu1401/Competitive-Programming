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
  } int d[n];
   for(int i=0;i<n;i++)
   {if(c[i]==false)
   {
          queue<int>q;
          q.push(i);
          c[i]=true;
         d[i]=0;
         while(!q.empty())
         {
             int x=q.front();
             q.pop();
             for(int j=0;j<g[x].size();j++)
             {
                 if(c[g[x][j]]==false)
                 {
                     d[g[x][j]]=1-d[x];
                     q.push(g[x][j]);
                     c[g[x][j]]=true;
                 }
                 else if(c[g[x][j]]==true && d[g[x][j]]==d[x])
                 {
                     cout<<"IMPOSSIBLE"<<endl;
                     return 0;
                 }
             }
             
         }  
   }}
fr(i,0,n)
cout<<d[i]+1<<" ";
cout<<endl;

   
 
}
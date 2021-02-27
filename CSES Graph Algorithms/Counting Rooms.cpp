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

using namespace std;
vector<pair<int,int>> g[1001][1001];
bool c[1001][1001];
void bfs( int i,int j) {
queue<pair<int,int>>b;
b.push({i,j});
c[i][j]=true;
while(!b.empty())
{pair<int,int> p=b.front();

for(int i=0;i<g[p.first][p.second].size();i++)
{ if(c[g[p.first][p.second][i].first][g[p.first][p.second][i].second]==false)
   { b.push(g[p.first][p.second][i]);
       c[g[p.first][p.second][i].first][g[p.first][p.second][i].second]=true;}
   }
    
    b.pop();
} return;

}

int main()
{
    int n,m,p=0;
    cin>>n>>m;
    char a[n][m];
    fr(i,0,n)
    {
        fr(j,0,m)
        {
            cin>>a[i][j];
            if(a[i][j]=='.')
            c[i][j]=false;
            else
            c[i][j]=true;
        }
    }
    fr(i,0,n)
    {
        fr(j,0,m)
        {
            if(a[i][j]=='.')
            {
                if(i>0 && a[i-1][j]=='.')
                g[i][j].pb(mp(i-1,j));
                if(i<n-1 && a[i+1][j]=='.')
                g[i][j].pb(mp(i+1,j));
                if(j<m-1 && a[i][j+1]=='.')
                g[i][j].pb(mp(i,j+1));
                if(j>0 && a[i][j-1]=='.')
                g[i][j].pb(mp(i,j-1));
            }
        }
    } fr(i,0,n)
    {
        fr(j,0,m)
        { 
            if(c[i][j]==false)
            {
                bfs(i,j);
                p++;
            }
            
        }
    } cout<<p<<endl;
    
}
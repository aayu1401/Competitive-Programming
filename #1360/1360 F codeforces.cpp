
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
 

int main()
{
    int t;
    cin>>t;
    while(t--)
    { int n,m,s=0;
    cin>>n>>m;
    string a[n],b;
    vector<char>c[m];
    fr(i,0,n)
    cin>>a[i];
    fr(i,0,m)
    {
        fr(j,0,n)
        c[i].pb(a[j][i]);
    } b=a[0];
    fr(i,0,m)
{
    fr(j,0,c[i].size())
    {
        b[i]=c[i][j];
        int p=0;
        fr(u,0,n)
        { int q=0;
            fr(v,0,m)
            {
                if(a[u][v]!=b[v])
                q++;
            }
            if(q>1)
            p=1;
        } if(p==0)
        {
            cout<<b<<endl;s=1;break;
        } b=a[0];
    } if(s==1)break; 
} if(s==0)
 cout<<-1<<endl;
    
    }
}
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
#define lb(a,b) lower_bound(a.begin(),a.end(),b)
#define ub(a,b) upper_bound(a.begin(),a.end(),b)
#define st(a) sort(a.begin(),a.end());
#define s(a) a.size()
#define o_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
using namespace __gnu_pbds;
using namespace std;
set<string>a;

int main()
{   ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int n,x;
cin>>n>>x;
int h[n],s[n];
vector<pair<int,int>> a;
int dp[n][x+1];
    fr(i,0,n)
    cin>>h[i];
    fr(i,0,n)
    cin>>s[i];
    fr(i,0,n)
    a.pb(mp(h[i],s[i]));
    st(a);
    fr(i,0,n)
    {   fr(j,0,x+1)
        { 
            if(j==0)
            dp[i][j]=0;
            else if(i==0)
            { if(j>=a[i].first)
            dp[i][j]=a[i].second;
            else
            dp[i][j]=0;
            }
            else
            { dp[i][j]=dp[i-1][j];
                if(j>=a[i].first)
                dp[i][j]=max(dp[i][j],dp[i-1][j-a[i].first]+a[i].second);
        
            }
            
        }
    } cout<<dp[n-1][x]<<endl;
}
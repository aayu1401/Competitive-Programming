
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
    int n;
    cin>>n;
    ll a[n],dp[n][n],m=0;
    fr(i,0,n)
    cin>>a[i];
    fr(i,0,n)
    {
        fr(j,0,n)
        { dp[i][j]=INT_MIN;
            if(j==0)
            dp[i][j]=max(a[i],dp[i][j]);
        
            if(i>0 && j>0 && dp[i-1][j-1]>=0 && (dp[i-1][j-1]+a[i])>=0)
            dp[i][j]=max(dp[i][j],dp[i-1][j-1]+a[i]);
            if(i>0)
            dp[i][j]=max(dp[i][j],dp[i-1][j]);
            //cout<<dp[i][j]<<" ";
        } //cout<<endl;
    }
    for(ll i=0;i<n;i++)
    {
        if(dp[n-1][i]>=0)
        m=max(m,i+1);
    }
    cout<<m<<endl;
}
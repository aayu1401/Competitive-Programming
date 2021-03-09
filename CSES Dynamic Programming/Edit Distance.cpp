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
 string a,b;
 cin>>a>>b;
 int n,m;
 n=a.length();
 m=b.length();
 int dp[n][m];
 fr(i,0,n)
 {
     fr(j,0,m)
     {  if(i==0 && j==0)
     {
             if(a[i]==b[j])
             dp[i][j]=0;
             else
             dp[i][j]=1;
         }
         else
         { dp[i][j]=max(i+1,j+1);
         if(a[i]==b[j])
         dp[i][j]-=1;
         if(i>0)
             dp[i][j]=min(dp[i-1][j]+1,dp[i][j]);
             if(j>0)
            dp[i][j]=min(dp[i][j-1]+1,dp[i][j]);
            if(i>0 && j>0)
             dp[i][j]=min(dp[i][j],dp[i-1][j-1]+(a[i]==b[j]?0:1));
             
         } 
     }
 } cout<<dp[n-1][m-1]<<endl;
}
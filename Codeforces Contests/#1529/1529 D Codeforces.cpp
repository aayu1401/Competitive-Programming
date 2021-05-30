
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
   ll n;
   cin>>n;
   ll dp[n+1],a[n+1],c[n+1]={0};
   c[0]=0; 
   for(int i=1;i<=n;i++)
   {
       for(int j=i;j<=n;j+=i)
       c[j]++;
   }
   dp[0];a[0]=0;dp[1]=1;a[1]=1;
   fr(i,2,n+1)
   {
       dp[i]=a[i-1]+c[i];
       dp[i]%=998244353;
       a[i]=dp[i]+a[i-1];
       a[i]%=998244353;

   }
   cout<<dp[n]<<endl;
}
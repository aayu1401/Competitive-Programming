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
int c[n];
fr(i,0,n)
cin>>c[i];
sort(c,c+n);
int dp[x+1];
dp[0]=1;
fr(i,1,x+1)
{ dp[i]=0;
    fr(j,0,n)
    { if(i>=c[j])
      dp[i]+=dp[i-c[j]];
      dp[i]%=1000000007;
    }
} 
cout<<dp[x]<<endl;
}
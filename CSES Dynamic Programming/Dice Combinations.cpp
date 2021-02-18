
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
{ ll n;
cin>>n;
ll dp[n+1];

	dp[0]=1;  
	fr(i,1,n+1)
	{   dp[i]=0;
	    if(i>=1)
	    dp[i]+=dp[i-1];
	    if(i>=2)
	    dp[i]+=dp[i-2];
	    if(i>=3)
	    dp[i]+=dp[i-3];
	    if(i>=4)
	    dp[i]+=dp[i-4];
	    if(i>=5)
	    dp[i]+=dp[i-5];
	    if(i>=6)
	    dp[i]+=dp[i-6];
	    dp[i]%=1000000007;
	  
	}
cout<<dp[n]<<endl;
	
	
	
}

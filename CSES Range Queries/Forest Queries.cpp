
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
{
    int n,q,r,x1,x2,y1,y2;
    cin>>n>>q;
    char a[n][n];
    pair<int,pair<int,int>> dp[n][n];
    fr(i,0,n)
    {
        fr(j,0,n)
        cin>>a[i][j];
    }
    fr(i,0,n)
    { fr(j,0,n)
    {    r=a[i][j]=='*'?1:0;
        dp[i][j].first=r; dp[i][j].second.first=r;dp[i][j].second.second=r;
       
        if(i==0 && j==0)
        continue;
        else if(i==0)
        {
            dp[i][j].first+=dp[i][j-1].second.second; dp[i][j].second.second+=dp[i][j-1].second.second;
        }
        else if(j==0)
        {
            dp[i][j].first+=dp[i-1][j].second.first; dp[i][j].second.first+=dp[i-1][j].second.first;
        }
        else
        {
             dp[i][j].first+=dp[i-1][j-1].first+dp[i-1][j].second.first+dp[i][j-1].second.second;
             dp[i][j].second.second+=dp[i][j-1].second.second;
             dp[i][j].second.first+=dp[i-1][j].second.first;
        }
       
    }
    }
    fr(i,0,q)
    {cin>>y1>>x1>>y2>>x2;
    int s=0;
    s+=dp[y2-1][x2-1].first;
    if(x1>1 && y1>1)
    s+=dp[y1-2][x1-2].first;
    if(x1>1)
    s-=dp[y2-1][x1-2].first;
    if(y1>1)
    s-=dp[y1-2][x2-1].first;
    cout<<s<<endl;
        
    }
    
}
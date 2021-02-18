
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
    int t;
    cin>>t;
    while(t--)
    { 
      ll a,b,k,s=0;
      cin>>a>>b>>k;
      ll c[a]={0},d[b]={0},x[k],y[k];
      fr(i,0,k)
      {
          cin>>x[i];
          c[x[i]-1]++;
      }
      fr(i,0,k)
      {
          cin>>y[i];
          d[y[i]-1]++;
      }
      fr(i,0,k)
      {
          s+=(k+1-c[x[i]-1]-d[y[i]-1]);
          
      }
      cout<<s/2<<endl;
    }
}
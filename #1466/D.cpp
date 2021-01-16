
#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vl vector<ll>
#define vvll vector<pair<ll,ll>>
#define fr(i,a,b) for(ll i=a;i<b;i++)
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

ll gcd(ll a, ll b)
{
    if(a==0)
    return b;
    else if(b==0)
    return a;
    else if(a>b)
    return gcd(b,a%b);
    else
    return gcd(b%a,a);
} 

int main()
{ ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
   
  int t;
  cin>>t;
  while(t--)
  { ll n,x,y,s=0;
  cin>>n;
  ll w[n];
  fr(i,0,n)
  {cin>>w[i];s+=w[i];}
  vector<ll>graph[n];
  fr(i,0,n-1)
  {
      cin>>x>>y;
      x--, y--;
      graph[x].pb(y);
      graph[y].pb(x);
  }
  vector<pair<ll,ll>>b;
  fr(i,0,n)
  b.pb(mp(w[i],graph[i].size()));
  sort(b.begin(),b.end());
  cout<<s<<" ";
  frr(i,n-1,0)
  {
      while(b[i].second>1)
      {
          s+=b[i].first;
          cout<<s<<" ";
          b[i].second--;
      }
  }
  cout<<endl;
      
  }
}


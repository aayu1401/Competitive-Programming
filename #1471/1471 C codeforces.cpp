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
  { int n,m;
  cin>>n>>m;
  ll a[n],c[m],s=0;
  fr(i,0,n)
  cin>>a[i];
  fr(i,0,m)
  cin>>c[i];
  sort(a,a+n);
  int j=0;
  frr(i,n-1,0)
  {  
      if(j<m)
      {
          s+=min(c[j],c[a[i]-1]);
          j++;
      }
      else
      s+=c[a[i]-1];
  }
  cout<<s<<endl;
  }
  
}
      


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
      ll n,k,p,c=0,r=0,q=1,d=1;
      cin>>n>>k;
      ll a[n];
      fr(i,0,n)
      cin>>a[i];
      sort(a,a+n);
      p=a[n-k];
      fr(i,0,n)
      {
          if(p==a[i])
          {
              c++;
              if(i>=(n-k))
              r++;
          }
      }
      
      cout<<nCr(c,r)<<endl;
      
    }
}
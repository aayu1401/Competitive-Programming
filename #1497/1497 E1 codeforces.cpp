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
 
using namespace __gnu_pbds;
using namespace std;

int main()
{  bool b[10000001];
fr(i,0,10000001)
b[i]=true;
b[0]=false; b[1]=false; 
vector<int>c;
fr(i,2,sqrt(10000001))
{
    if(b[i]==true)
    { 
        for(int j=i*i;j<10000001;j+=i)
        b[j]=false;
    }
}
fr(i,0,10000001)
{
    if(b[i]==true)
    c.pb(i);
}
    int t;
    cin>>t;
    while(t--)
    {
       int n,k,p,q,ans=0;
      cin>>n>>k;
      int a[n],g[n];
      fr(i,0,n)
     cin>>a[i];
      
      fr(i,0,n)
      {
          int j=0;q=1;
          while(c[j]<=a[i] && j<c.size())
          {p=0;
          while(a[i]%c[j]==0)
          {
              a[i]/=c[j];p++;
          } if(b[a[i]]==true)
          {
              q*=a[i];a[i]=1;
          }
          if(p%2!=0)
          q*=c[j];
          j++;
              
          } g[i]=q;
          
      } 
      set<int>s;
      fr(i,0,n)
      {
          if(s.find(g[i])==s.end())
          s.insert(g[i]);
          else
          {
              s.clear();ans++;s.insert(g[i]);
          }
      }
      cout<<ans+1<<endl;
      
    }
}

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
{    ios_base::sync_with_stdio(false);    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {int n;
    cin>>n;
    int q[n],a[n],b[n];
    set<int,greater<int>>d;
    set<int>e;
    fr(i,0,n)
    {cin>>q[i];d.insert(i+1);e.insert(i+1);a[i]=0;b[i]=0;}
    
    a[0]=q[0];b[0]=q[0];e.erase(e.find(q[0])); d.erase(d.find(q[0]));
    
   fr(i,1,n)
   {
       if(q[i]!=q[i-1])
       {
           a[i]=q[i];b[i]=q[i];e.erase(q[i]);d.erase(d.find(q[i]));
       }
   }
  fr(i,0,n)
  {
      if(a[i]==0)
      {
          a[i]=(*e.begin());
          e.erase(e.begin());
      }
      cout<<a[i]<<" ";
  }cout<<endl;
  fr(i,0,n)
  {
      if(b[i]==0)
      {  auto y=d.lower_bound(q[i]);
     
      b[i]=(*y);
      d.erase(y);
          
      }
      
      cout<<b[i]<<" ";
  }cout<<endl;
  
    }
}
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
{
    ll n,x,y=0;
    cin>>n>>x;
    ll a[n];
    vector<pair<ll,int>>b;
    fr(i,0,n)
   { cin>>a[i];b.pb(mp(a[i],i));}
   st(b);
   if(n<3)
    cout<<"IMPOSSIBLE"<<endl;
    else{
    fr(i,0,n)
    { if(y==1)
    break;
        int j=i+1,k=n-1;
        while(j<k)
        { if((b[i].first+b[j].first+b[k].first)==x)
          { cout<<b[i].second+1<<" "<<b[j].second+1<<" "<<b[k].second+1<<endl;
              y=1;
              break;
          }
          else if((b[i].first+b[j].first+b[k].first)<x)
          j++;
          else
          k--;
            
        }
    }
     if(y==0)
      cout<<"IMPOSSIBLE"<<endl;}
    
}
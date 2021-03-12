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
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,a[4],y=0,b[4];
        cin>>n;
        fr(i,0,4)
        {cin>>b[i];a[i]=b[i];}
        fr(i,0,16)
        {
            if((i&(1<<0))!=0)
            {
                a[0]--;a[1]--;
            }
            if((i&(1<<1))!=0)
            {
                a[2]--;a[1]--;
            }
            if((i&(1<<2))!=0)
            {
                a[2]--;a[3]--;
            }
            if((i&(1<<3))!=0)
            {
                a[0]--;a[3]--;
            }
        
          int k=0;  
          fr(j,0,4)
            { 
                if(a[j]<0 || a[j]>n-2)
                k=1;
                a[j]=b[j];
            } 
            if(k==0)
            y=1;
        }if(y==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
   }
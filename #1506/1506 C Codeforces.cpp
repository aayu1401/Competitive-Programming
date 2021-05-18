
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
{
    int t;
    cin>>t;
    while(t--)
    { string a,b;
    cin>>a>>b;
    int m=a.length(),n=b.length(),s;
    s=m+n;
    fr(k,1,min(a.length(),b.length())+1)
    {
        fr(i,0,a.length()-k+1)
        {
            fr(j,0,b.length()-k+1)
            {int p=0;
                fr(l,0,k)
                {
                    if(a[i+l]!=b[j+l])
                    {
                        p=1;break;
                    }
                   
                } if(p==0)
                    s=min(s,m+n-2*k);
                 
            }
        }
    } cout<<s<<endl;
    }
}
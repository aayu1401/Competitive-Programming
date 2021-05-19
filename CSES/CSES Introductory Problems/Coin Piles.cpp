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
#define lb(a,b) lower_bound(a.begin(),a.end(),b)
#define ub(a,b) upper_bound(a.begin(),a.end(),b)
#define st(a) sort(a.begin(),a.end());
#define s(a) a.size()
#define o_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
using namespace __gnu_pbds;
using namespace std;
int main()
{  int t;
cin>>t;
while(t--)
{
    ll a,b,d;
    cin>>a>>b;
    d=abs(a-b);
    if(a>b)
    {
        a-=2*d;
        b-=d;
    }
    else
    {
        b-=2*d;
        a-=d;
    }
    if(a<0 || b<0)
    cout<<"NO"<<endl;
    else if(a%3!=0 )
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
 
}
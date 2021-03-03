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
    ll n,x,y,m=0;
    cin>>n;
    map<ll,ll>a;
    vvll b;
    fr(i,0,n)
    {
        cin>>x>>y;
        a[x]++;
        a[y+1]--;
    }
    for(auto i :a)
    b.pb(i);
    st(b);
    fr(i,1,b.size())
    {
        b[i].second+=b[i-1].second;
        m=max(m,b[i-1].second);
    }
    cout<<m<<endl;
}
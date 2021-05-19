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
{ int n;
cin>>n;
if(n==1)
cout<<1<<endl;
else if(n<4)
cout<<"NO SOLUTION"<<endl;
else if(n==4)
cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
else 
{
    for(int i=1;i<=n;i+=2)
    cout<<i<<" ";
    for(int i=2;i<=n;i+=2)
    cout<<i<<" ";
    cout<<endl;
}
}

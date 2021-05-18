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
{  int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int a[n],b[k+1]={0},d[k+1]={0},m=n/2,p; 
    map<int,int>c;
    fr(i,0,n)
    cin>>a[i];
    fr(i,0,n/2)
    {   c[a[i]+a[n-i-1]]++;
    b[max(a[i],a[n-i-1])]++;
        d[min(a[i],a[n-i-1])]++;}
    fr(i,1,k)
    {b[i]+=b[i-1];d[i]+=d[i-1];}
    for(auto i:c)
    {
        if((i.first)>k)
        p=b[i.first-k-1]+(n/2)-i.second;
        else
        p=(n/2)-i.second+(n/2)-d[i.first-1]; 
        m=min(m,p);
        
        
    } 
    cout<<m<<endl;}
        
    
}
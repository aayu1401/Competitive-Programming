
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
    {  ll n,p=0,q,m;
    cin>>n;
    ll a[n];
    fr(i,0,n)
    cin>>a[i];
    fr(i,1,n)
    {  m=max(a[i],a[i-1]);
    q=min(a[i],a[i-1]);
    while(m>q)
    {
        if(m<=2*q)
        break;
        else
        {
            p++;q*=2;
        }
        
    }
   
    }
    cout<<p<<endl;}
    
}
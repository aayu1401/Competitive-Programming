
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
    {  ll n,b[3]={0},p,q=0;
    cin>>n;p=n/3;
    ll a[n];
    fr(i,0,n)
    {
        cin>>a[i];
        b[a[i]%3]++;
    } 
    if(b[0]>p)
    {
        b[1]+=(b[0]-p);q=b[0]-p;
        b[0]=p;
    }
    if(b[1]>p)
    {
       b[2]+=(b[1]-p);q+=b[1]-p; b[1]=p;
    }
    if(b[2]>p)
    {
      b[0]+=(b[2]-p); q+=b[2]-p; b[2]=p;
    }
     if(b[0]>p)
    {
        b[1]+=(b[0]-p);q+=b[0]-p;
    }
    cout<<q<<endl;
    
    }
}
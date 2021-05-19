
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
   {
    ll n,p;
    cin>>n;
    ll a[n];
    vector<ll>b;
    fr(i,0,n)
    cin>>a[i];
    sort(a,a+n);ll q=1;
    fr(i,1,n)
    {
       
            if(a[i]==a[i-1])
            q++;
            else
            {
            b.pb(q);q=1;
            }

    }b.pb(q);
    st(b);p=LONG_MAX;
    
    for(ll i=0;i<b.size();i++)
   { q=b.size()-i; p=min(p,n-b[i]*q);}
    cout<<p<<endl;
    
   }
}
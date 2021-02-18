
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
    { ll n,p=1,x;
    cin>>n;
    vector<pair<ll,int>>a;
    vector<int>b;
    fr(i,0,n)
    {
        cin>>x;
        a.pb(mp(x,i+1));
    }
    st(a);x=a[0].first;b.pb(a[0].second);
    fr(i,1,n)
    { if(a[i].first<=x)
    { x+=a[i].first;b.pb(a[i].second);
    }
    else
    {
        x+=a[i].first;b.clear();b.pb(a[i].second);
    }
        
    } cout<<b.size()<<endl;
    st(b);
    fr(i,0,b.size())
    cout<<b[i]<<" ";
    cout<<endl;
    }
}
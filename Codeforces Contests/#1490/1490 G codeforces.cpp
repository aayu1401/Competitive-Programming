
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
    {  ll n,m,s=0,p=0,q,r;
    cin>>n>>m;
    ll a[n],x[m];
    vector<ll>b,d;
    fr(i,0,n)
    cin>>a[i];
    fr(i,0,m)
    cin>>x[i];
    fr(i,0,n)
    {
        s+=a[i];
        if(s>0)
        {
            if(b.size()==0 || b[b.size()-1]<s)
           { b.pb(s);d.pb(i);}
        }
        if(s>p)
        p=s;
    } 
    fr(i,0,m)
    {
        if(x[i]>p && s<=0)
        cout<<-1<<" ";
        else if(x[i]<=p)
        { ll y= lower_bound(b.begin(),b.end(),x[i])-b.begin();
            cout<<d[y]<<" ";
            
        }
        else
        {
            q=(x[i]-p)/s;
            r=(x[i]-p)%s;
            if(r>0)
            {
                q++;r= p+r-s;
            }
            else
            r=p;
            ll y= lower_bound(b.begin(),b.end(),r)-b.begin();
           
            cout<<q*n+d[y]<<" ";
             
        }
    } cout<<endl;
    }
}
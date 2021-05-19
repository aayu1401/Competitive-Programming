
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
    int n;
    cin>>n;
    int f[n];
    bool g[n];
    fr(i,0,n)
    g[i]=false;
    vector<int>a,b;
    fr(i,0,n)
    {cin>>f[i];
    if(f[i]>0)
    g[f[i]-1]=true;
        else 
        b.pb(i+1);
    }
    fr(i,0,n)
    {
        if(g[i]==false)
        a.pb(i+1);
    }
    fr(i,0,a.size())
    {
        if(a[i]==b[i])
        { if(i>0)
        {
            int temp=a[i-1];
            a[i-1]=a[i];
            a[i]=temp;
        }
        else{
            int temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
        }
        
            
        } 
    }
    fr(i,0,a.size())
    f[b[i]-1]=a[i];
    fr(i,0,n)
    cout<<f[i]<<" ";
    cout<<endl;
}
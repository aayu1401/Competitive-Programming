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
    {   ll n,p,q,s;
    cin>>n;
 
    p=(n*(n-1))/2;
    q=p%n;
    s=p;
    p/=n;
    
    for(int i=0;i<n;i++)
    {
        int j=i+1;
       for(int k=0;k<p && j<n;k++)
        {cout<<1<<" ";j++;}
        if(q>0 && j<n)
        {
            cout<<0<<" ";j++;
        }
        while(j<n)
        {cout<<-1<<" ";j++;}
            
        
    }cout<<endl;
    
    }
    
}
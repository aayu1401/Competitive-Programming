#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vl vector<ll>
#define fr(i,a,b) for(int i=a;i<b;i++)
#define frr(i,a,b) for(int i=a;i>=b;i--)

using namespace std;


int main()
{
    ll n,p,c=0,s=0;
    cin>>n;
    set<ll>a;
    a.insert(s);
    fr(i,0,n)
    { cin>>p;
    s+=p;
    
    if(a.find(s)!=a.end())
    {
        c++;
        a.clear(); a.insert(p); s=p;a.insert(0);
    }
    else
    a.insert(s);
        
    }
   cout<<c<<endl;

}
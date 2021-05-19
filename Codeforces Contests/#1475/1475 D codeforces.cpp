
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
       ll n,m,p=0,sum=0;
       cin>>n>>m;
       ll a[n],b[n];
       vector<ll>c,d;
       fr(i,0,n)
       {cin>>a[i];sum+=a[i];}
       fr(i,0,n)
       cin>>b[i];
       
       if(sum<m)
       cout<<-1<<endl;
       else
       { fr(i,0,n)
       {
           if(b[i]==1)
           c.pb(a[i]);
           else
           d.pb(a[i]);
       }
       st(c);st(d);
      frr(i,c.size()-2,0)
      c[i]+=c[i+1];
      st(c);
      frr(i,d.size()-2,0)
      d[i]+=d[i+1];
      st(d);
       ll z=lower_bound(d.begin(),d.end(),m)-d.begin();
       ll e=c.size()+d.size()*2,s;
       
        s=(z+1)*2;
        if(s<e && z!=d.size())
        e=s;
       fr(i,0,c.size())
       { if(m<=c[i])
         {
            if(i+1<e)
           e=i+1;
           break;
         }else{
           ll y=lower_bound(d.begin(),d.end(),m-c[i])-d.begin();
         s=i+1+ (y+1)*2;
      
           if(s<e && y!=d.size())
           e=s;}
       }cout<<e<<endl;
      
           
       }
      
    }
}
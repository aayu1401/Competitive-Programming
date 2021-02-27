
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
   ll n,m,p=1,s=0;
   cin>>n>>m;
   ll x[n];
  vector<pair<ll,ll>>a,b;
  vector<ll>c;
   fr(i,0,n)
   cin>>x[i];
   sort(x,x+n);
   for(ll i=0;i<n;i++)
   {if(i==0)
   a.pb(mp(LONG_MAX,i));
   else
   a.pb(mp((x[i]-x[i-1]-1)/2,i));
   if(i==n-1)
   b.pb(mp(LONG_MAX,i));
   else
   b.pb(mp((x[i+1]-x[i])/2,i));
   
   } 
   sort(a.begin(),a.end(),cmp);
   sort(b.begin(),b.end(),cmp);
   int h=0;
   while(m>0)
   { ll k,l;
   k=a.size(); l=b.size();
     frr(i,k-1,0)
     {
         
         if(a[i].first==0)
         a.pp();
         else if(m>0){c.pb(x[a[i].second]-p);
         m--; 
         a[i].first--;s+=p;
  }
         
    }
    frr(i,l-1,0)
     {
         
         if(b[i].first==0)
         b.pp();
         else if(m>0)
         {c.pb(x[b[i].second]+p);
         m--;
         b[i].first--; s+=p;
          }
    } p++;
       
   } cout<<s<<endl;
   fr(i,0,c.size())
   cout<<c[i]<<" ";
   cout<<endl;
  

   
}
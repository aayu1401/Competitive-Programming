
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

void func(int b[],int a[],int l,int h,int i,int n)
{
   vector<pair<int,int>>c;
   if(l>h || l<0 || h>n-1)
  return;
   
   for(int j=l;j<=h;j++)
   c.pb(mp(a[j],j));
   st(c);
   int p=c[c.size()-1].second;
   int q=c[c.size()-1].first;
   b[q-1]=b[i]+1;
   func(b,a,l,p-1,q-1,n);
   func(b,a,p+1,h,q-1,n);
   
}
int main()
{  
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int a[n],b[n];
       fr(i,0,n)
       cin>>a[i];
       b[n-1]=0;
       fr(i,0,n)
       {
           if(a[i]==n)
           {
               func(b,a,0,i-1,n-1,n);
               func(b,a,i+1,n-1,n-1,n);break;
           }
       } fr(i,0,n)
       cout<<b[a[i]-1]<<" ";
       cout<<endl;
       
   }
}
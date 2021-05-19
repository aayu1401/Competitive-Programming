
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
     int a[n],b[n+2]={0},c[n+2]={0},p=0,q=0;
     fr(i,0,n)
     cin>>a[i];
     sort(a,a+n);
     fr(i,0,n)
     {   if(b[a[i]-1]>0)
       b[a[i]-1]++;
       else if(b[a[i]]>0)
       b[a[i]]++;
       else 
       b[a[i]+1]++;
       if(c[a[i]-1]==0)
       c[a[i]-1]++;
       else if(c[a[i]]==0)
       c[a[i]]++;
       else
       c[a[i]+1]++;
         
     } fr(i,0,n+2)
     {
         if(b[i]>0)
         p++;
         if(c[i]>0)
         q++;
     } cout<<p<<" "<<q<<endl;
        
}

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

void upd(ll n,ll index,ll val,ll bittree[])
{ index+=1; 
while(index<=n)
{
    bittree[index]+=val;
    index+=(index&(-index));
} 
}
//sum from [0,index]
ll sum(ll index,ll bittree[])
{ index+=1;
    ll s=0;
    while(index>0)
    {
        s+=bittree[index];
        index-=(index&(-index));
      
    } return s;
}

int main()
{
    ll n,q,k,l,r,u;
    cin>>n>>q;
    ll a[n],bittree1[n+1]={0},bittree2[n+1]={0};
    fr(i,1,n+1)
    {cin>>a[i-1]; 
    ll u=a[i-1];
    upd(n,i-1,u,bittree1);
       upd(n,i,-u,bittree1);
       upd(n,i-1,u*(i-2),bittree2);
       upd(n,i,-u*(i-1),bittree2); }
  
    fr(i,0,q)
    { cin>>k;
    if(k==1)
    {
        cin>>l>>r>>u;
       upd(n,l-1,u,bittree1);
       upd(n,r,-u,bittree1);
       upd(n,l-1,u*(l-2),bittree2);
       upd(n,r,-u*(r-1),bittree2);
    
    }
    else
    {
        cin>>u;
        cout<<sum(u-1,bittree1)*(u-1)-sum(u-2,bittree1)*(u-2)- sum(u-1,bittree2)+ sum(u-2,bittree2)<<endl;
    }
    
    }
}
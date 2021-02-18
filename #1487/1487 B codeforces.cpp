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
    {   ll n,k,p,q,x,y;
    cin>>n>>k;
    if(n%2==0)
    { 
    cout<<(k-1)%n+1<<endl;
       
    }
    else{ k--;
   
    q=k%n+1;
    x= n/2;
     p=k/x;
    y=(p+q-1+n)%n+1;
  
    cout<<y<<endl;
    
    
    }
    
    }
}
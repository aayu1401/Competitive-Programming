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
{ set<long long int>a;

for( long long int i=1;i<10001;i++)
a.insert(i*i*i);
    int t;
    cin>>t;
    while(t--)
    {   long long int x,y=0;
     cin>>x;
      for(long long int i : a)
      { if(x<i)
      break;
     
          if(a.find(x-i)!=a.end() )
          {  
              y=1;break;
          }
      } if(y==1)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
   
    
    }
}
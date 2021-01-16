#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vl vector<ll>
#define vvll vector<pair<ll,ll>>
#define fr(i,a,b) for(ll i=a;i<b;i++)
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

ll gcd(ll a, ll b)
{
    if(a==0)
    return b;
    else if(b==0)
    return a;
    else if(a>b)
    return gcd(b,a%b);
    else
    return gcd(b%a,a);
} 


int main()
{ ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
      ll n,k,a=0,b=0,c=0,d=0,q=0,e;
      cin>>n;
    map<int,int>s;
    vector<pair<int,int>>p;
      fr(i,0,n)
      { cin>>k;
      s[k]++;
      }
      for(auto j:s)
      p.pb(j);
      st(p);
      e=n/2;
     int i=p.size()-1;
     while(i>=0)
     {  if(a>0)
     break;
         a+=p[i].second;
         i--;
     }
     while(b<=a && i>=0)
     { b+=p[i].second;
     i--;
     }
     while(i>=0)
     {
         if((a+b+c+p[i].second)>e)
         break;
         c+=p[i].second;
         i--;
     }
     if(a==0||b==0||c==0)
     cout<<0<<" "<<0<<" "<<0<<endl;
     else if(c<=a || b<=a)
     cout<<0<<" "<<0<<" "<<0<<endl;
     else
     cout<<a<<" "<<b<<" "<<c<<endl;
  }
  
}
      


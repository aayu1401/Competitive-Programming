#include<bits/stdc++.h>
#define ll long long int 
#define vi vector<int>
#define vl vector<ll>
#define fr(i,a,b) for(int i=a;i<b;i++)
#define frr(i,a,b) for(int i=a;i>=b;i--)

using namespace std;
const ll N = 2e5 + 5;
vl a(N);
vl l(N);
vl s(N);
vl b[N];
ll ans=0;

void leave(ll node)
{ s[node]=a[node];
    if(b[node].size()==0)
    l[node]=1;
    for(auto i : b[node])
    {
        leave(i);
        s[node]+=s[i];
        l[node]+=l[i];
    }
}
void sol(ll node)
{ ll z= s[node]/l[node];
if(s[node]%l[node])z++;
ans=max(ans,z);
for(auto i: b[node])
sol(i);

    
}

int main()
{
    int n,p;
    cin>>n;
    fr(i,0,n-1)
    { cin>>p;
    b[p-1].push_back(i+1);
        
    }
    fr(i,0,n)
    cin>>a[i];
    leave(0);
    
    sol(0);
    cout<<ans<<endl;

}
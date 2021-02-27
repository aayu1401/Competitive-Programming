
#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    int t;
    cin>>t;
    while(t--)
    { ll n,k,p;
    cin>>n>>k;
    p=n/k;
    p*=k;
    p+=(k/2);
    cout<<min(n,p)<<endl;
    }
}
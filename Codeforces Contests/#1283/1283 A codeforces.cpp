
#include<bits/stdc++.h>


using namespace std;

int main()
{ int n=60*24;
    int t;
    cin>>t;
    while(t--)
    { int h,m,q;
    cin>>h>>m;
    q=h*60+m;
    cout<<n-q<<endl;
    }
}
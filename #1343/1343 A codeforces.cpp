#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    { long int n,m=0,d;
    cin>>n;
  for(int k=2;k<n && m==0 ;k++)
    {   d=pow(2,k)-1;
        if(n%d==0)
        m=1;
       
    }
   
    cout<<fixed<<n/d<<endl;
    
        
    }
}
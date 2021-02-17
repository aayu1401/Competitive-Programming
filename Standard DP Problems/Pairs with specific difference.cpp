#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--)
 {
     int n,k;
     cin>>n;
     int a[n],dp[n];
     for(int i=0;i<n;i++)
     cin>>a[i];
     cin>>k;
     sort(a,a+n);
     if(n>=0)
     dp[0]=0;
     if(n>0)
     {
         if((a[1]-a[0])<k)
         dp[1]=a[0]+a[1];
         else
         dp[1]=0;
     }
     for(int i=2;i<n;i++)
     {  
       if((a[i]-a[i-1])<k)
       dp[i]=max(dp[i-1], dp[i-2]+a[i]+a[i-1]);
       else
       dp[i]=max(dp[i-1],dp[i-2]);
         
     }
     cout<<dp[n-1]<<endl;
 }
}
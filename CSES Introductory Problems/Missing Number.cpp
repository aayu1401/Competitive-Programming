#include<bits/stdc++.h>
using namespace std;
int main()
{ long long int s=0,n;
int b;
 
cin>>n;
 
for(int i=1;i<n;i++)
{ cin>>b;
s+=b;
 
   
} cout<<((n*(n+1))/2)-s<<endl;
    
}
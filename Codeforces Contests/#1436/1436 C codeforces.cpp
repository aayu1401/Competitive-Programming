#include <bits/stdc++.h>
using namespace std;
long long int fact(long long int n)
{
    if(n==0)
    return 1;
    else if(n==1)
    return 1;
    else
    return (n*fact(n-1))%1000000007;
}


int main() {
	
	   long long int n,x,p,q,a,b,s=1,l=0,r;
	   cin>>n>>x>>p; r=n; q=n;
	   a=x-1; b=n-x; 
	   while(l<r)
	   {s%=1000000007; 
	       q--;
	       int m=(l+r)/2;
	       if(m>p)
	       {s*=b;s%=1000000007; r=m;b--;}
	       else if(m==p)
	       {s*=1;l=m+1;}
	       else
	       { 
	           s*=a;a--;
	           s%=1000000007; l=m+1;
	       } 
	      
	   }s%=1000000007;cout<<(s*fact(q))%1000000007<<endl;
	   
	}


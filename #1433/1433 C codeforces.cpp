#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	     int n,x=1,p,q=0,s=0;
	     cin>>n;
	   long long  int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        
	    }p=a[0];
	    for(;x<n;x++)
	    {
	        if(a[x]!=a[x-1])
	        q=1;
	        if(a[x]>p)
	        {
	            p=a[x]; s=x;
	        }
	        else if(p==a[x] )
	        { if(x>0 && a[x-1]!=a[x])
	           { p=a[x]; s=x;}
	           else if(x<n-1 && a[x+1]!=a[x])
	           { p=a[x]; s=x;}
	        }
	        
	    }
	    if(q==0)
	    cout<<-1<<endl;
	    else
	    cout<<s+1<<endl;
	}
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	     int n,x=0,p=0;
	     cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==1)
	        x++;
	    } if(x==1||x==0)
	    cout<<0<<endl;
	    else{
	   int i=0,j=n-1;
	   while(i<n)
	   {
	       if(a[i]==1)
	       break;
	       i++;
	   }
	   while(j>=0)
	   {
	       if(a[j]==1)
	       break;
	       j--;
	   }
	   cout<<j-i-x+2-1<<endl;}
	}
}
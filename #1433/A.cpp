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
	     if(n%10!=1)
	     x+=(n%10-1)*10;
	     while(n!=0)
	     {
	         p++;n/=10;
	     }
	     if(p==1)
	     x++;
	     else if(p==2)
	     x+=3;
	     else if(p==3)
	     x+=6;
	     else x+=10;
	    cout<<x<<endl;
	}
}
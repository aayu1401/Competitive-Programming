#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	int n;
	cin>>n;
	long long int p=1,x=n,k=n/2;
	for(int i=0;i<n/2;i++)
	{
	    p*=x;
	  if(k!=n/2)
	 {p*=k;}
	 else
	 p/=k;
	 k--;
	    x--;
	}

	p/=2;
	cout<<p<<endl;
}
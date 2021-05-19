#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    double n;
	    cin>>n;
	    int p=sqrt(n);
	  
	    cout<<ceil(n/p)+p-2<<endl;
	    
	}
}

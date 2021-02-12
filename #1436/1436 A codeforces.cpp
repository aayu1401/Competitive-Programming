#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,m,s=0;
	    cin>>n>>m;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        s+=a[i];
	    }
	    if(s==m)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
}

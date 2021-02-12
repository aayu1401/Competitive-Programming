#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,a,b,c,d,q=0;
	    cin>>n>>m;
	    for(int i=0;i<n;i++)
	    {cin>>a>>b>>c>>d;
	    if(b==c)
	    q=1;
	        
	    }
	    if(m%2==0 && q==1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
}

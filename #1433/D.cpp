#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	     int n,p,m;
	     cin>>n;
	    vector<int>a,b; cin>>p; a.push_back(0);m=p;
	    for(int i=1;i<n;i++)
	    {
	        cin>>p;
	        if(p==m)
	        a.push_back(i);
	        else
	        b.push_back(i);
	    }
	    if(a.size()==n)
	    cout<<"NO"<<endl;
	    else
	    {
	        cout<<"YES"<<endl;
	        for(int i=0;i<a.size();i++)
	        cout<<b[0]+1<<" "<<a[i]+1<<endl;
	        if(b.size()>1)
	        {for(int i=1;i<b.size();i++)
	            cout<<a[0]+1<<" "<<b[i]+1<<endl;
	        }
	    }
	}
}
#include <bits/stdc++.h>
using namespace std;


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int n;
	   cin>>n;
	   int a[n][n];
	   for(int i=0;i<n;i++)
	   {
	       for(int j=0;j<n;j++)
	       a[i][j]=0;
	   }
	   for(int i=0;i<n;i++)
	   {
	       a[i][i]=1;
	       a[(i+1)%n][i]=1;
	   }
	    for(int i=0;i<n;i++)
	   {
	       for(int j=0;j<n;j++)
	       cout<<a[i][j]<<" ";
	       cout<<endl;
	   }
	}
}

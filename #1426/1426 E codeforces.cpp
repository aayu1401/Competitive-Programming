#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3,p=0,q=0;
	cin>>n>>a1>>a2>>a3>>b1>>b2>>b3;
	d1=b1; d2=b2; d3=b3; c1=a1;c2=a2;c3=a3;
	p=min(a1,b2)+min(a2,b3)+min(a3,b1);
	if(a1+a2<b1)
	q+=b1-a1-a2;
	if(a3+a2<b2)
	q+=b2-a3-a2;
	if(a1+a3<b3)
	q+=b3-a1-a3;
	cout<<q<<" "<<p<<endl;
	
	
	
}

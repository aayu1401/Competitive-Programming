int findMaximum(int a[], int n) {
	    int l=0,h=n-1,ans=a[0],p,m;
	    while(l<=h)
	    {
	        m=(l+h)/2;
	        if(m>0 && m<n-1 && a[m-1]<a[m] && a[m+1]<a[m])
	        {
	            p=m;break;
	        }
	        else if(m==n-1|| m==0)
	        {
	            p=m;break;
	        }
	        else if(a[m]>a[m-1])
	        l=m+1;
	        else 
	        h=m-1;
	    }
	   return a[p];
	}
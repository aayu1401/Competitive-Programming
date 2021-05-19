int searchInsertK(vector<int>a, int n, int k)
    {
        int l=0,h=n-1,m;
        while(l<=h)
        {
            m=(l+h)/2;
            if(a[m]==k)
            return m;
            else if(m==n-1 && a[m]<k)
            return 8;
            else if(m==0 && a[m]>k)
            return 0;
            else if(m>0 && a[m]>k && a[m-1]<k)
            return m;
            else if(m<n-1 && a[m]<k && a[m+1]>k)
            return m+1;
            else if(a[m]<k)
            l=m+1;
            else
            h=m-1;
        } 
    }
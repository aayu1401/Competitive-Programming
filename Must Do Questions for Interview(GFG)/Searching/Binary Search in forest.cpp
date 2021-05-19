int find_height(int tree[], int n, int k)
    {
        int l=0,h=1001,m,s;
        while(l<=h)
        {  
            m=(l+h)/2;
            s=0;
            for(int i=0;i<n;i++)
            {
                if(tree[i]>m)
                s+=tree[i]-m;
            }
            //cout<<l<<" "<<h<<" "<<m<<" "<<s<<" "<<k<<endl;
            if(s==k)
            return m;
            else if(s<k)
           h=m-1;
            else
            l=m+1;
        } 
        return -1;
    }
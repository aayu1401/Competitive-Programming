int countSetBits(int n)
    {
        int p=log2(n),q=0,r,s;
        for(int i=0;i<=p;i++)
        { r=(1<<i);
        s=r*2;
        q+=(n/s)*r;
        if((n%s)>=r)
        q+=(n%s)+1-r;
        }
        return q;
    }
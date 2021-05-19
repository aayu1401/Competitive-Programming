int Search(vector<int> a, int k) {
    int l=0,h=a.size()-1,m,p,ans=-1;
    while(l<=h)
    {
        m=(l+h)/2;
        if(m==0 || m==a.size()-1)
        {
            p=a.size()-1;break;
        }
        else if(a[m]<a[m-1])
        {
            p=m-1;break;
        }
        else if(a[m]>a[m+1])
        {
            p=m;break;
        }
        else if(a[m]>a[a.size()-1])
        l=m+1;
        else
        h=m-1;
    }
    if(k>=a[0])
    {
        l=0;h=p;
    }
    else
    { l=p+1,h=a.size()-1;
        
    }
    while(l<=h)
    {
        m=(l+h)/2;
        if(a[m]==k)
        return m;
        else if(a[m]<k)
        l=m+1;
        else
        h=m-1;
    } return ans;
}
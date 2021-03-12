vector<int> singleNumber(vector<int> a) 
    { int b=0,c=0,d=0,x;
    vector<int>y;
    for(int i=0;i<a.size();i++)
    b^=a[i];
    x=b &(~(b-1));
    for(int i=0;i<a.size();i++)
    {
        if((a[i]&x)==0)
        c^=a[i];
        else
        d^=a[i];
    }
    y.push_back(c);
    y.push_back(d);
    sort(y.begin(),y.end());
        return y;
    }
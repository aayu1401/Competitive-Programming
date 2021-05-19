pair<long,long> indexes(vector<long long> v, long long x)
    {
        long a=-1,b=-1,l=0,h=v.size()-1,m;
        while(l<=h)
        { m=(l+h)/2;
         if(v[m]==x)
         {
             if(m==0|| v[m-1]<x)
             {
                 a=m;
                 break;
             }
             else
             h=m-1;
         }
         else if(v[m]>x)
         h=m-1;
         else 
         l=m+1;
            
        } 
        l=0;h=v.size()-1;
        while(l<=h)
        { m=(l+h)/2;
         if(v[m]==x)
         {
             if(m==v.size()-1|| v[m+1]>x)
             {
                 b=m;
                 break;
             }
             else
             l=m+1;
         }
         else if(v[m]>x)
         h=m-1;
         else 
         l=m+1;
            
        } pair<long,long>c;
        c={a,b};
        return c;
        
        
    }
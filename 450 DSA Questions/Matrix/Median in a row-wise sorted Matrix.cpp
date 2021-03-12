int median(vector<vector<int>> &m, int r, int c){
       int mn=0,mx=INT_MAX,d;
       for(int i=0;i<r;i++)
       {
           mn=min(m[i][0],mn);
           mx=max(m[i][c-1],mx);
       }
       d=(r*c+1)/2;
       while(mn<mx)
       {int mid=(mx+mn)/2;
           int p=0;
           for(int i=0;i<r;i++)
           p+=upper_bound(m[i].begin(),m[i].end(),mid)-m[i].begin();
           if(p<d)
           mn=mid+1;
           else
           mx=mid;
       } return mn;
    }
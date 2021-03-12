  bool searchMatrix(vector<vector<int>>& m, int t) {
        
        int l=0,h=m.size(),r=-1,c=m[0].size();
        while(l<h)
        {cout<<l<<" "<<h<<endl; int mid=(l+h)/2;
         if(t>=m[mid][0] && t<=m[mid][c-1])
         { r=mid;break;
}
         else if(t<m[mid][0])
            h=mid;
         else
             l=mid+1;
} 
        if(r==-1)
            return false;
        l=0;h=c;
        while(l<h)
        { int mid=(l+h)/2;
            if(t==m[r][mid])
                return true;
         else if(t<m[r][mid])
             h=mid;
         else
             l=mid+1;
             
} return false;
        
    }
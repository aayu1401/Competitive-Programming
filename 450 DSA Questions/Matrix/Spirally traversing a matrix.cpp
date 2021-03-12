 vector<int> spirallyTraverse(vector<vector<int> > m, int r, int c) 
    { vector<int>a;
        int p=(r+1)/2;
        for(int k=0;k<p;k++)
        { 
            if(k==r/2)
        {for(int j=k;j<c-k;j++)
         a.push_back(m[k][j]);}
         else if(k==c/2)
         { for(int j=k;j<r-k;j++)
         a.push_back(m[j][c-k-1]);
         }
        else{    
            for(int j=k;j<c-k-1;j++)
         a.push_back(m[k][j]);
         for(int j=k;j<r-k-1;j++)
         a.push_back(m[j][c-k-1]);
         for(int j=c-k-1;j>k;j--)
         a.push_back(m[r-k-1][j]);
         for(int j=r-k-1;j>k;j--)
         a.push_back(m[j][k]);
        } if(a.size()==r*c)
        break;
        }
        return a;
    }
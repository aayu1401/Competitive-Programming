int maxSquare(int n, int m, vector<vector<int>> mat){
        pair<int,pair<int,int>> dp[n][m];int q=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {  if(i==0)
               dp[i][j].second.second=mat[i][j];
               else 
               dp[i][j].second.second=mat[i][j]==0?0:dp[i][j-1].second.second+1;
               if(j==0)
               dp[i][j].second.first=mat[i][j];
               else 
               dp[i][j].second.first=mat[i][j]==0?0:dp[i-1][j].second.first+1;
               if(i==0|| j==0)
               dp[i][j].first=mat[i][j];
               else 
               dp[i][j].first=min(dp[i-1][j-1].first+mat[i][j],min(dp[i][j].second.first,dp[i][j].second.second));
            
                if(q<dp[i][j].first)
                q=dp[i][j].first;
            }
        } 
        return q;
    }
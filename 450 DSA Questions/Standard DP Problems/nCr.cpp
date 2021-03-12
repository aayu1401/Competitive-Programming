int nCr(int n, int r){
        int dp[r+1][n+1];
        for(int i=0;i<=r;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(j<i)
                dp[i][j]=0;
                else if(i==0 || i==j)
                dp[i][j]=1;
                else
                dp[i][j]=dp[i-1][j-1]+dp[i][j-1];
              dp[i][j]%=1000000007;
                
            } 
        } return dp[r][n];
    }
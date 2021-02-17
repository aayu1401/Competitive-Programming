int maximumPath(int N, vector<vector<int>> m)
    {
        int dp[N][N];
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(i==0)
                dp[i][j]=m[i][j];
                else if(j==0)
                dp[i][j]=max(dp[i-1][j],dp[i-1][j+1])+m[i][j];
                else if(j==N-1)
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+m[i][j];
                else 
                dp[i][j]=max(dp[i-1][j],max(dp[i-1][j-1],dp[i-1][j+1]))+m[i][j];
             
            } 
        } sort(dp[N-1],dp[N-1]+N);
        return dp[N-1][N-1];
    }
};
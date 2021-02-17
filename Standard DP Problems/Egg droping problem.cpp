int eggDrop(int n, int k) 
{
    int dp[n+1][k+1],q;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=k;j++)
        {
            if(j==0)
            dp[i][j]=0;
            else if(i==0)
            dp[i][j]=j;
            else
            {
                q=INT_MAX;
                for(int l=1;l<=j;l++)
                q=min(q,max(dp[i-1][l-1],dp[i][j-l]));
                dp[i][j]=1+q;
            } 
        }
    } return dp[n-1][k];
}
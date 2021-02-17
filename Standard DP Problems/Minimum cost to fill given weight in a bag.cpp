int minimumCost(int cost[], int N, int W) 
	{ 
        int dp[N][W+1];
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<=W;j++)
            {
                if(j==0)
                dp[i][j]=0;
                else if(i==0)
                { if(cost[i]==-1)
                dp[i][j]=-1;
                else
                dp[i][j]=cost[i]*j;
                }
                else 
                {if(cost[i]!=-1 && j>i && dp[i][j-i-1]!=-1)
                {if(dp[i-1][j]!=-1)
                 dp[i][j]=min(dp[i-1][j],dp[i][j-i-1]+cost[i]);
                 else
                 dp[i][j]=dp[i][j-i-1]+cost[i];}
                 else
                 dp[i][j]=dp[i-1][j];
                  
                }  
            }
        } return dp[N-1][W];
	} 
int lcs(int x, int y, string s1, string s2){
    
    int dp[x][y];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            if(i==0)
            {
                if(s1[i]==s2[j])
                dp[i][j]=1;
                else
                dp[i][j]=dp[i][j-1];
            }
            else if(j==0)
            { 
                if(s1[i]==s2[j])
                dp[i][j]=1;
                else
                dp[i][j]=dp[i-1][j];
                
            }
            else
            {if(s1[i]==s2[j])
                dp[i][j]=max(1+dp[i-1][j-1],max(dp[i-1][j],dp[i][j-1]));
                else
                dp[i][j]=max(dp[i-1][j-1],max(dp[i-1][j],dp[i][j-1]));
                
            }
        }
    } return dp[x-1][y-1];
    
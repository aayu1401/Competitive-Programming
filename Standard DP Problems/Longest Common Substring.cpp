 
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
       int dp[n][m],q=0;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(i==0|| j==0)
               dp[i][j]=(S1[i]==S2[j])?1:0;
               else
               {
                   if(S1[i]==S2[j])
                   dp[i][j]=dp[i-1][j-1]+1;
                   else
                   dp[i][j]=0;
               }
               if(dp[i][j]>q)
               q=dp[i][j];
           
               
           } 
       } return q;
    }
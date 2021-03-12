long long int countBT(int h) { 
       long long int dp[h+1];
       dp[0]=1; dp[1]=1; dp[2]=3;
       for(int i=3;i<=h;i++)
       {
           dp[i]=2*dp[i-1]*dp[i-2]+dp[i-1]*dp[i-1];
           dp[i]%=1000000007;
       }
       return dp[h];
    }
int matrixMultiplication(int N, int arr[])
    {
        int dp[N][N],min=0;
       for(int i=0;i<N;i++)
       {
           for(int j=0;j<N;j++)
           dp[i][j]=0;
       }

for(int l=2;l<N;l++)
        {
            for(int i=0;i<N-l;i++)
            { int k=i+l;
            dp[i][k]=INT_MAX;
            
            for(int j=i+1;j<k;j++)
            {
                min=dp[i][j]+dp[j][k]+arr[i]*arr[j]*arr[k];
                if(min<dp[i][k])
                dp[i][k]=min;
            } 
                
            } 
        } return dp[0][N-1];
    }
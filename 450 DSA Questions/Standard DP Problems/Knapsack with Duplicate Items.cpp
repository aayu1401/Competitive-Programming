int knapSack(int n, int W, int val[], int wt[])
    {
       vector<pair<int,int>>a;
       for(int i=0;i<n;i++)
       a.push_back(make_pair(wt[i],val[i]));
       sort(a.begin(),a.end());
       int dp[n][W+1];
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<=W;j++)
           {
               if(j==0)
               dp[i][j]=0;
               else if(i==0)
               {
                   if(j>=a[i].first && j%(a[i].first)==0)
                   dp[i][j]= (j/a[i].first)*(a[i].second);
                   else
                   dp[i][j]=dp[i][j-1];
               }
               else
               {
                   if(j>=a[i].first)
                   dp[i][j]= max(dp[i-1][j],dp[i][j-a[i].first]+a[i].second);
                   else
                   dp[i][j]=dp[i-1][j];
               }
           }
       } return dp[n-1][W];
    }
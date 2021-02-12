int knapSack(int W, int wt[], int val[], int n) 
{ 
   int dp[n][W+1];
   vector<pair<int,int>>a;
   
   for(int i=0;i<n;i++)
   a.push_back(make_pair(wt[i],val[i]));
   
   sort(a.begin(),a.end());
   
   for(int i=0;i<n;i++)
   {
       wt[i]=a[i].first; val[i]=a[i].second;
   }
   
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<=W;j++)
       { if(j==0)
       dp[i][j]=0;
       else if(i==0)
       {  if(j>=wt[i])
       dp[i][j]=val[i];
       else
       dp[i][j]=0;
       }
       else if(j>=wt[i])
       dp[i][j]=max(val[i]+dp[i-1][j-wt[i]],dp[i-1][j]);
       else
       dp[i][j]=dp[i-1][j];
           
       }
     
   } return dp[n-1][W];
}

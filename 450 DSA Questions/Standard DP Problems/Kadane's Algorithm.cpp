int maxSubarraySum(int a[], int n){
    int q=0,dp[n];
    q=a[0];
    for(int i=0;i<n;i++)
    {  if(i==0)
    dp[i]=a[i];
    else
    {
        if(dp[i-1]>=0 && a[i]>=0)
        dp[i]=dp[i-1]+a[i];
        else if(dp[i-1]<=0 && a[i]>=0)
        dp[i]=a[i];
        else if((dp[i-1]-a[i])>=0)
        dp[i]=dp[i-1]+a[i];
        else
        dp[i]=a[i];
    }
    if(dp[i]>q)
    q=dp[i];
        
    } return q;
    
}
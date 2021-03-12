bool cmp(struct val a,struct val b)
{
    if(a.second==b.second )
    return (a.first<b.first);
    return (a.second<b.second);
}
int maxChainLen(struct val a[],int n)
{ 
   int dp[n]; sort(a,a+n,cmp);
   for(int i=0;i<n;i++)
   {
      
       dp[i]=1;
       if(i>0)
       { for(int j=i-1;j>=0;j--)
       {
           if(a[j].second<a[i].first)
           dp[i]=max(dp[i],1+dp[j]);
       }
           
       }
   } sort(dp,dp+n);
   return dp[n-1];
}
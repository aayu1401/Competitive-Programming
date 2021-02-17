int maxSubstring(string s)
	{
	    int dp[s.length()],q=-1;
	    for(int i=0;i<s.length();i++)
	    {
	        if(i==0)
	        {
	            if(s[i]=='1')
	            dp[i]=-1;
	            else
	            dp[i]=1;
	        }
	        else
	        {
	            if(s[i]=='1')
	            dp[i]=max(-1,dp[i-1]-1);
	            else
	            dp[i]=max(1,dp[i-1]+1);
	        } if(dp[i]>q)
	        q=dp[i];
	    } return q;
	}
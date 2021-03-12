int LongestRepeatingSubsequence(string s){
		    int n=s.length();
		    int dp[n][n];
		    for(int i=0;i<n;i++)
		    {
		        for(int j=0;j<n;j++)
		        {
		            if(i==0 && j==0)
		            dp[i][j]=0;
		            else if(i==0)
		             dp[i][j]=max(dp[i][j-1],s[i]==s[j]?1:0);
		             else if(j==0)
		             dp[i][j]=max(dp[i-1][j],s[i]==s[j]?1:0);
		             else
		             {
		                 if(s[i]==s[j] && i!=j)
		                 dp[i][j]= max(dp[i-1][j-1]+1,max(dp[i][j-1],dp[i-1][j]));
		                 else
		                 dp[i][j]= max(dp[i-1][j-1],max(dp[i][j-1],dp[i-1][j]));
		             }
		           
		        } 
		    } return dp[n-1][n-1];
		}
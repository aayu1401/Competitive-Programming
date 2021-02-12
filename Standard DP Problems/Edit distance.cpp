int editDistance(string s, string t)
		{
              int dp[t.length()][s.length()];
              for(int i=0;i<t.length();i++)
              {
                  for(int j=0;j<s.length();j++)
                  { dp[i][j]=max(i+1,j+1);
                      dp[i][j]-=(s[j]==t[i]);
                     
                      if(i>0)
                      dp[i][j]= min(dp[i][j],dp[i-1][j]+1);
                      if(j>0)
                      dp[i][j]= min(dp[i][j],dp[i][j-1]+1);
                      if(i>0 && j>0)
                      dp[i][j]= min(dp[i][j],dp[i-1][j-1]+(s[j]!=t[i]));
                      
                  }
              } return dp[t.length()-1][s.length()-1];
		}
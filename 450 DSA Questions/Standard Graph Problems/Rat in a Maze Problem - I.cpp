 vector<pair<int,int>>g[10][10];
       bool b[10][10];
       vector<string>ans;
    void bfs(int i,int j,string s,int n)
    {
        if(i==n-1 && j==n-1)
        ans.push_back(s);
        else
        {
            for(int k=0;k<g[i][j].size();k++)
            { if(b[g[i][j][k].first ][g[i][j][k].second]==false)
            {b[g[i][j][k].first ][g[i][j][k].second]=true;
                if(i>g[i][j][k].first )
               bfs(i-1,j,s+'U',n);
                else if(i<g[i][j][k].first)
                 bfs(i+1,j,s+'D',n);
                  else if(j<g[i][j][k].second)
                bfs(i,j+1,s+'R',n);
                 else if(j>g[i][j][k].second)
                 bfs(i,j-1,s+'L',n);
                 b[g[i][j][k].first ][g[i][j][k].second]=false;
            } 
            }
        }
        
        
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
      
     
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           { b[i][j]=false;
               if(m[i][j]==1)
           {
               if(j-1>=0 && m[i][j-1]==1)
               g[i][j].push_back(make_pair(i,j-1));
               if(j+1<n && m[i][j+1]==1)
               g[i][j].push_back(make_pair(i,j+1));
               if(i-1>=0 && m[i-1][j]==1)
               g[i][j].push_back(make_pair(i-1,j));
               if(i+1<n && m[i+1][j]==1)
               g[i][j].push_back(make_pair(i+1,j));
           }
           }
       } 
       string s="";
       b[0][0]=true;
       bfs(0,0,s,n);
       sort(ans.begin(),ans.end());
       return ans;
       
    }
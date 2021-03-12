 int numIslands(vector<vector<char>>& g) {
        int n=g.size(),m=g[0].size(),p=0;
       bool b[n][m];
       int u[8]={1,1,1,0,0,-1,-1,-1};
       int v[8]={1,-1,0,1,-1,0,1,-1};
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(g[i][j]=='0')
               b[i][j]=true;
               else
               b[i][j]=false;
           }
       }
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(b[i][j]==false)
               { queue<pair<int,int>>a;p++;
                a.push(make_pair(i,j));
                b[i][j]=true;
                while(!a.empty())
                { int x=a.front().first;
                int y=a.front().second;
                a.pop();
                    for(int k=0;k<8;k++)
                    {
 if(u[k]+x>=0 && u[k]+x<n && v[k]+y>=0 && v[k]+y<m && b[u[k]+x][v[k]+y]==false)
 { 
     a.push(make_pair(u[k]+x,v[k]+y));
     b[u[k]+x][v[k]+y]=true;
 }
                    }
                }
                   
               }
           }
       }
       
      return p; 
       
    }
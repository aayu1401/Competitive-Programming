 for(int y=0;y<4;y++){
	      for(int i=0;i<n;i++)
	      {
	          for(int j=0;j<n;j++)
	          { 
	              for(int k=0;k<a[i][j].size();k++)
	              {
	                  if(b[i][j]+1<b[a[i][j][k].first][a[i][j][k].second])
	                  b[a[i][j][k].first][a[i][j][k].second]=b[i][j]+1;
	              }
	          } 
	      }}
	      
	void shortest_distance(vector<vector<int>>&d){
	    int n=d.size();
       for(int k=0;k<n;k++)
       {   for(int i=0;i<n;i++)
	    {   for(int j=0;j<n;j++)
	        { if(d[i][k]!=-1 && d[k][j]!=-1 && d[i][j]!=-1)
	        
	            d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
	            
	        }
	    }}
	}
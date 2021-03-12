int isNegativeWeightCycle(int n, vector<vector<int>>g){
	    int m=g.size();
	    int d[n];
	    for(int i=0;i<n;i++)
	    d[i]=INT_MAX;
	    d[0]=0;
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(d[g[j][0]]!=INT_MAX && d[g[j][1]]>d[g[j][0]]+g[j][2])
	            d[g[j][1]]=d[g[j][0]]+g[j][2];
	        }
	    }
	   
	        for(int j=0;j<m;j++)
	        {
	            if(d[g[j][0]]!=INT_MAX && d[g[j][1]]>d[g[j][0]]+g[j][2])
	         return 1;
	        }
	        return 0;
	}
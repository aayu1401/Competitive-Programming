void dfs(int i,vector<int>&a,int V, vector<int> adj[],bool b[])
	{
	    a.push_back(i);
	    for(int j=0;j<adj[i].size();j++)
	    {
	        if(b[adj[i][j]]==false)
	        {   b[adj[i][j]]=true;
	            dfs(adj[i][j],a,V,adj,b);}
	    }
	}
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    vector<int>a;
	    bool b[V]={false};
	    b[0]=true;
	    dfs(0,a,V,adj,b);
	    return a;
	    
	}
vector<int>bfsOfGraph(int V, vector<int> g[])
	{
	    queue<int>b;
	    bool c[V]={false};
	    b.push(0);
	    vector<int>a;
	    c[0]=true;
	    int d;
	    while(!b.empty())
	    { d=b.front();
	    a.push_back(d);
	    b.pop();
	    for(int i=0;i<g[d].size();i++)
	    {
	        if(c[g[d][i]]==false)
	        { c[g[d][i]]=true;
	        b.push(g[d][i]);
	            
	        }
	    }
	        
	    } return a;
	    
	}
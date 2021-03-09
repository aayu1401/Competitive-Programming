vector<int> topoSort(int V, vector<int> g[]) {
	    queue<int>a;
	    vector<int>b;
	    bool c[V];
	    int d[V];
	    for(int i=0;i<V;i++)
	    {
	        c[i]=false;d[i]=0;
	    }
	    for(int i=0;i<V;i++)
	    {
	        for(int j=0;j<g[i].size();j++)
	         d[g[i][j]]++;
	    }
	    for(int i=0;i<V;i++)
	    {
	        if(d[i]==0)
	        {
	            a.push(i);
	            c[i]=true;
	        }
	    }
	    while(!a.empty())
	    {
	        int p=a.front();
	        a.pop();
	        b.push_back(p);
	        for(int i=0;i<g[p].size();i++)
	        {
	            if(c[g[p][i]]==false)
	            {
	                d[g[p][i]]--;
	                if(d[g[p][i]]==0)
                    {
                        a.push(g[p][i]);
	                    c[g[p][i]]=true;
                    }
	            }
	        }
	    } return b;
	}
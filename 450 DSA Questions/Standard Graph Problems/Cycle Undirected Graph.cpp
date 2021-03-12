bool cycle(int u,bool b[],int a,vector<int>adj[])
  {
      b[u]=true;
      for(int i=0;i<adj[u].size();i++)
      {
          if(b[adj[u][i]]==false)
          {
              if(cycle(adj[u][i],b,u,adj)==true)
              return true;
          }
          else if(adj[u][i]!=a)
          return true;
      }return false;
  }
	bool isCycle(int V, vector<int>adj[]){
	   bool b[V]={false};
	   for(int i=0;i<V;i++)
	   b[i]=false;
	   for(int i=0;i<V;i++)
	   {
	       if(b[i]==false && cycle(i,b,-1,adj)==true)
	       return true;
	   }
	   return false;
	}
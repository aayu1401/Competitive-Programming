	int minStepToReachTarget(vector<int>&s, vector<int>&f, int n){
	   vector<pair<int,int>>a[n][n];
	   int b[n][n];
	   bool c[n][n];
	   for(int i=0;i<n;i++)
	   {
	       for(int j=0;j<n;j++)
	      c[i][j]=false;
	   }
	   int u[8]={2,2,-2,-2,1,-1,1,-1};
	   int v[8]={1,-1,1,-1,2,2,-2,-2};
b[s[0]-1][s[1]-1]=0;
 queue<pair<int,pair<int,int>>>d;
 c[s[0]-1][s[1]-1]=true;
 d.push(pair<int,pair<int,int>>{0,{s[0]-1,s[1]-1}});

 while(!d.empty())
 { int l=d.front().first,j=d.front().second.second,i=d.front().second.first;
 d.pop();
 if(i==f[0]-1 && j==f[1]-1)
 return l;
 for(int k=0;k<8;k++)
 { if(v[k]+j>=0 && u[k]+i>=0 && v[k]+j<n && u[k]+i<n && c[u[k]+i][v[k]+j]==false )
 { c[u[k]+i][v[k]+j]=true;
 d.push(pair<int,pair<int,int>>{l+1,{u[k]+i,v[k]+j}});
 } }
 }
 
	}

};
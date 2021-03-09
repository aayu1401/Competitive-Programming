class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
    int n=board.size(),p=1;
        pair<int,int>k[n*n+1];
        vector<int>g[n*n+1];
     
        for(int i=n-1;i>=0;i--)
        { if(i%2==(n-1)%2)
        { for(int j=0;j<n;j++)
            {k[p]=make_pair(i,j);p++;}
}
         else
               { for(int j=n-1;j>=0;j--)
            {k[p]=make_pair(i,j);p++;}
}
}
        
        for(int i=1;i<n*n+1;i++)
        {  for(int j=1;j<=6;j++)
        { if((i+j)<=n*n )
        { if(board[k[i+j].first][k[i+j].second]!=-1)
            g[i].push_back(board[k[i+j].first][k[i+j].second]);
         else
            g[i].push_back(i+j);}
}
} bool c[n*n+1];int d[n*n+1];
        for(int i=0;i<n*n+1;i++)
        {c[i]=false;d[i]=INT_MAX;
       }
        d[1]=0;
        d[0]=0;
         
        multiset<pair<int,int>>a;
        a.insert(make_pair(0,1));
        while(!a.empty())
        { int x=(*a.begin()).first;
         int y=(*a.begin()).second;
         a.erase(a.begin());
         if(c[y]==true)
             continue;
         c[y]=true;
         for(int i=0;i<g[y].size();i++)
         { if(d[y]!=INT_MAX && d[y]+1<d[g[y][i]])
         {d[g[y][i]]=d[y]+1;
          a.insert(make_pair(d[g[y][i]],g[y][i]));}
}
}   if(d[n*n]==INT_MAX)
            return -1;

           return d[n*n];     
        
                 }   
};
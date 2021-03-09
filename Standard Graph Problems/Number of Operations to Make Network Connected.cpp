 int makeConnected(int n, vector<vector<int>>& c) {
      bool b[n];
        vector<int>a[n];
        for(int i=0;i<n;i++)
            b[i]=false;
        int p=0;
        for(int i=0;i<c.size();i++)
        { a[c[i][0]].push_back(c[i][1]);
         a[c[i][1]].push_back(c[i][0]);
}
for(int i=0;i<n;i++)
{ if(b[i]==false)
{
    p++;
   
    queue<int>q;
    q.push(i);
    b[i]=true;
    while(!q.empty())
    {  int k=q.front();
     q.pop();
     for(int j=0;j<a[k].size();j++)
     {
         if(b[a[k][j]]==false)
         {
             q.push(a[k][j]);
             b[a[k][j]]=true;
         }
     }
} 
}
}
 if(c.size()<n-1)
     return -1;
        else
            return p-1;
        }
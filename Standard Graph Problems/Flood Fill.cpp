class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
     int n=image.size(),p,m=image[0].size();
     bool b[n][m];
     p=image[sr][sc];
        queue<pair<int,int>>a;
        a.push(make_pair(sr,sc));
       int u[4]={0,0,1,-1};
        int v[4]={-1,1,0,0};
        for(int i=0;i<n;i++)
        { for(int j=0;j<m;j++)
            b[i][j]=false;
        }  b[sr][sc]=true;
        image[sr][sc]=newColor;
        while(!a.empty())
        {
            int i=a.front().first;
            int j=a.front().second;
            a.pop();
            for(int k=0;k<4;k++)
{ if((i+u[k])>=0 && (i+u[k])<n && (j+v[k])>=0 && (j+v[k]<m) && image[i+u[k]][j+v[k]]==p && b[i+u[k]][j+v[k]]==false )
{ b[i+u[k]][j+v[k]]=true;
  a.push(make_pair(i+u[k],j+v[k]));
 image[i+u[k]][j+v[k]]=newColor;
}
}
            
        } vector<vector<int>>x;
       
        for(int i=0;i<n;i++)
        { vector<int>y;
         for(int j=0;j<m;j++)
             y.push_back(image[i][j]);
         x.push_back(y);
}
        return x;
    }
};
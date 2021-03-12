string findOrder(string dict[], int N, int k) {
       
    int a[k][k],d[k]={0},p;
       bool b[k]={false};
       string ans="";
       for(int i=0;i<k;i++)
       {
           for(int j=0;j<k;j++)
           a[i][j]=0;
       }
       for(int i=1;i<N;i++)
       { p=min(dict[i].length(),dict[i-1].length());
       for(int j=0;j<p;j++)
       {
           if(dict[i][j]!=dict[i-1][j])
           {
               a[dict[i-1][j]-'a'][dict[i][j]-'a']=1;break;
           }
       }}
       for(int i=0;i<k;i++)
       {
           for(int j=0;j<k;j++)
           { 
               if(a[i][j]==1)
              d[j]++; 
           }
       } queue<int>q;
       for(int i=0;i<k;i++)
       { 
           if(d[i]==0)
           {
               q.push(i);b[i]=true;
           }
       }
       while(!q.empty())
       {p=q.front();
      
       ans+=char(p+'a');
     
       q.pop();
       for(int i=0;i<k;i++)
       {
           if(a[p][i]==1 && b[i]==false)
           { 
               d[i]--;
               if(d[i]==0)
               {
                   q.push(i);
                   b[i]=true;
               }
           }
       }
           
       }
      return ans;
}
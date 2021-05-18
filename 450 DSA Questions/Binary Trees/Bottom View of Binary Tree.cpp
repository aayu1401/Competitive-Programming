void diameter(vector<pair<int,int>>&a,vector<pair<int,int>>&b,int n,int h,Node *root)
{
    if(root==NULL)
    return;
    else
    {
        if(n<0)
        {
            if(b.size()<abs(n))
            b.push_back({root->data,h});
            else if(h>b[abs(n)-1].second)
            b[abs(n)-1]={root->data,h};
            
        }
        else
        {
            if(a.size()==n)
            a.push_back({root->data,h});
             else if(h>a[n].second)
            a[n]={root->data,h};
        }
        diameter(a,b,n+1,h+1,root->right);
        diameter(a,b,n-1,h+1,root->left);
    }
}
vector <int> bottomView(Node *root)
{
   vector<pair<int,int>>a,b;
   diameter(a,b,0,1,root);
   vector<int>c;
   for(int i=b.size()-1;i>=0;i--)
   c.push_back(b[i].first);
   for(int i=0;i<a.size();i++)
   c.push_back(a[i].first);
   return c;
}
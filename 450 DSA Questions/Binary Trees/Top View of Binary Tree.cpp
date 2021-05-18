void diameter(Node *root,int n, vector<pair<int,int>>&a, vector<pair<int,int>>&b,int h)
    {
        if(root==NULL)
        return;
        else
        {
            if(n<0)
            {
                if(b.size()<abs(n))
                b.push_back({root->data,h});
                else if(h< b[abs(n)-1].second)
                b[abs(n)-1]={root->data,h};
            }
            else
            {
                 if(a.size()<n+1)
                a.push_back({root->data,h});
                else if(h<a[n].second)
                a[n]={root->data,h};
            }
            diameter(root->left,n-1,a,b,h+1);
            diameter(root->right,n+1,a,b,h+1);
        }
    }
    vector<int> topView(Node *root)
    {
        vector<pair<int,int>>a,b;
        vector<int>c;
        
        diameter(root,0,a,b,1);
        for(int i=b.size()-1;i>=0;i--)
        c.push_back(b[i].first);
        for(int i=0;i<a.size();i++)
        c.push_back(a[i].first);
        return c;
    }
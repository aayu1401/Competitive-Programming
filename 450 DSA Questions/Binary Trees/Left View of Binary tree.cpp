void height(Node *root,int n,vector<int>&a)
{  
    if(root==NULL)
    return;
    else
    {  if(a.size()<n)
a.push_back(root->data);
    height(root->left,n+1,a);
    height(root->right,n+1,a);
        
    }
    
}
vector<int> leftView(Node *root)
{
   vector<int>a;
   height(root,1,a);
   return a;
   
}

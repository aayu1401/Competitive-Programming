int height(Node* root)
   {
       if(root==NULL)
       return 0;
       else
       return 1+max(height(root->right),height(root->left));
   }
    int diameter(Node* root)
    {
     if(root==NULL)
     return 0;
     else
     {
         int a=height(root->right),b=height(root->left);
         int c=diameter(root->right),d=diameter(root->left);
         return max(a+b+1,max(c,d));
     }
    }
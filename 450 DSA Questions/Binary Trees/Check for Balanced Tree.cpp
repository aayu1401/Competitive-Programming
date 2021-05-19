int height(Node *root)
{
    if(root==NULL)
    return 1;
    else
    {
        int a= height(root->left);
        int b=height(root->right);
        if(a==0|| b==0 || abs(a-b)>1)
        return 0;
        return max(a,b)+1;
    }
}
bool isBalanced(Node *root)
{
   if(height(root)==0)
   return 0;
   return 1;
}

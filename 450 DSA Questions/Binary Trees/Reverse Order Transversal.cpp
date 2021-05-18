vector<int> reverseLevelOrder(Node *root)
{
    vector<int>a;
    queue<Node*>b;
    stack<int>d;
    if(root==NULL)
    return a;
    b.push(root);
    while(!b.empty())
    {
        Node* c=b.front();
        b.pop();
        d.push(c->data);
        if(c->right!=NULL)
        b.push(c->right);
        if(c->left!=NULL)
        b.push(c->left);
        
      }
      while(!d.empty())
      {
          a.push_back(d.top());
          d.pop();
      }
      return a;
}
vector<int> inOrder(Node* root)
    {
      vector<int>a;
      stack<Node*>b;
      Node*c;
      c=root;
      while(!b.empty() || c!=NULL)
      {
          while(c!=NULL)
          { b.push(c);
          c=c->left;
              
          } c=b.top();
          b.pop();
          a.push_back(c->data);
          c=c->right;
      } return  a;
    }
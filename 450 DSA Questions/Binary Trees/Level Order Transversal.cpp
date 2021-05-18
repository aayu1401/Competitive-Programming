 vector<int> levelOrder(Node* node)
    {  vector<int>a;
    if(node==NULL)
    return a;
       queue<Node*>b;
       b.push(node);
       
       while(!b.empty())
       { Node* c=b.front();
       b.pop();
       a.push_back(c->data);
       if(c->left!=NULL)
       b.push(c->left);
       if(c->right!=NULL)
       b.push(c->right);
           
       } return a;
    }
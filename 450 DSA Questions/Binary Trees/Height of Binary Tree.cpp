int height(struct Node* node){
        int a,b;
        if(node==NULL)
        return 0;
        else
        { a=height(node->left);
        b=height(node->right);
        return max(a+1,b+1);
            
        }
    }
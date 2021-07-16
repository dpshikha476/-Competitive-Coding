Node* lca(Node* root ,int n1 ,int n2 )
    {
       if(root==NULL)
       return NULL;
       
       if(root->data==n1 || root->data==n2)
       return root;
       
       Node *lLca=lca(root->left,n1,n2);
       Node *rLca=lca(root->right,n1,n2);
       
       if(lLca && rLca)
       return root;
       
       return (lLca!=NULL)?lLca:rLca;
       
    }
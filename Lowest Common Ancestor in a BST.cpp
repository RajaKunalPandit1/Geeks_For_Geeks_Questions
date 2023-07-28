Output Status : 

        Node* LCA(Node *root, int n1, int n2)
        {
            
            if(root == NULL || root->data == n1 || root->data == n2){
                return root;
            }
            
            Node *leftNode = LCA(root->left,n1,n2);
            Node *rightNode = LCA(root->right,n1,n2);
            
            if(leftNode == NULL){
                return rightNode;
            }else if(rightNode == NULL){
                return leftNode;
            }else{
                return root;
            }
        }

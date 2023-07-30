Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1163 /1163
Total Points Scored: 
2 /2
Your Total Score: 
2727
Total Time Taken: 
0.32
Your Accuracy: 
100%
Attempts No.: 
1

Node * inOrderSuccessor(Node *root, Node *x){
        
        Node *res = NULL;
        
        while(root != NULL){
            
            if(root->data > x->data){
                res = root;
                root = root->left;
            }else{
                root = root->right;
            }
        }
        return res;
    }

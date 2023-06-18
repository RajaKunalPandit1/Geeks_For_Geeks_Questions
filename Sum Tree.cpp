Output Staus : 

Problem Solved Successfully
Test Cases Passed: 
225 /225
Total Points Scored: 
4 /4
Your Total Score: 
2507
Total Time Taken: 
0.03
Your Accuracy: 
33%
Attempts No.: 
3

    int sum (Node *node){
        
        if(node == NULL) return 0;
        
        return ((node->data) + sum(node->left) + sum(node->right));
        
    }
    
    bool isSumTree(Node* root)
    {
         
        if(root == NULL) return true;
        
        if(root->left == NULL && root->right == NULL) return true;
        
        int sum1 = 0;
        
        if(root-> left != NULL) sum1 += sum(root->left);
        if(root->right != NULL) sum1 += sum(root->right);
        
        if(root->data != sum1) return false;
        
        return (isSumTree(root->left) && isSumTree(root->right));
    }

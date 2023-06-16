Output Status :

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
232 /232
Your Total Score: 
2493
Total Time Taken: 
0.03
Correct Submission Count: 
3
Attempts No.: 
5

    int isSumProperty(Node *root)
    {
        
        if(root == NULL) return 1;
        
        int sum = 0;
        
        if(root->left == NULL && root->right == NULL){
            return 1;
        }
        
        if(root->left != NULL){
            sum += root->left->data;
        }
        
        if(root->right != NULL){
            sum += root->right->data;
        }
        
        return (root->data == sum && isSumProperty(root->left) && isSumProperty(root->right));
    }

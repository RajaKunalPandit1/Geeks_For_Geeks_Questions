Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1224 /1224
Your Total Score: 
2673
Total Time Taken: 
0.43
Correct Submission Count: 
2
Attempts No.: 
4

// Time : O(N) :: Aux_Space : O(N)

    bool func(Node *root1,Node *root2){
        
        if(root1 == NULL && root2 == NULL) return true;
        if(root1 == NULL || root2 == NULL) return false;
        
        if(root1->data != root2->data) return false;
        
        return (func(root1->left,root2->right) && func(root1->right,root2->left));
    }
    
    // return true/false denoting whether the tree is Symmetric or not
    bool isSymmetric(struct Node* root)
    {
	    if(root == NULL) return true;
	    
	    bool res = func(root->left,root->right);
	    return res;
    }

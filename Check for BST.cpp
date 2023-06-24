Output Status : 

Problem Solved Successfully
Test Cases Passed: 
130 /130
Total Points Scored: 
2 /2
Your Total Score: 
2567
Total Time Taken: 
0.07
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
{
    public:
    
    bool func(Node *root, int &min_val, int &max_val){
        
        if(root == NULL) return true;
        
        return ((root->data > min_val && root->data < max_val) && func(root->left,min_val,root->data) && func(root->right,root->data,max_val));
        
    }
    
    
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) {
        
        int min_val = INT_MIN;
        int max_val = INT_MAX;
        
        bool res = func(root,min_val,max_val);
        return res;
        
    }
};

// Another Sol :: 

    
    int prev = INT_MIN;
    
    bool isBST(Node* root) 
    {
        if(root == NULL) return true;
        
        if(isBST(root->left) == false) return false;
        
        if(root->data <= prev) return false;
        prev = root->data;
        
        isBST(root->right);
    }

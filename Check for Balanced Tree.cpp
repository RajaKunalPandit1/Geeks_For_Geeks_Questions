Output Status : 

Problem Solved Successfully
Test Cases Passed: 
141 /141
Total Points Scored: 
2 /2
Your Total Score: 
2493
Total Time Taken: 
0.4
Your Accuracy: 
100%
Attempts N

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    
    int func(Node *root){
        
        if(root == NULL) return 0;
        
        int lh = func(root->left);
        if(lh == -1) return -1;
        
        int rh = func(root->right);
        if(rh == -1) return -1;
        
        if(abs(lh-rh) > 1) return -1;
        else return max(lh,rh) + 1;
        
    }
    
    bool isBalanced(Node *root)
    {
        
        int flag = func(root);
        
        if(flag != -1) return true;
        return false;
        
    }
};

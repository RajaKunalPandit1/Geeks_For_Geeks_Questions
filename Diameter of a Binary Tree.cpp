Output Status : 

Problem Solved Successfully
Test Cases Passed: 
321 /321
Total Points Scored: 
4 /4
Your Total Score: 
2523
Total Time Taken: 
0.86
Your Accuracy: 
100%
Attempts No.: 
1

// Naive Sol :: Time : O(N^2) :: Aux_Space : O(H)

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    
    int height(Node *root){
        
        if(root == NULL) return 0;
        
        return 1 + max(height(root->left),height(root->right));
        
    }
    
    int diameter(Node* root) {
        
        if(root == NULL) return 0;
        
        int d1 = 1 + (height(root->left) + height(root->right));
        int d2 = diameter(root->left);
        int d3 = diameter(root->right);
        
        return max(d1,max(d2,d3));
    }
};

// Efficient Solution :: 

    int res = 0;
    int height(Node *root){
        
        if(root == NULL) return 0;
        
        int lh = height(root->left);
        int rh = height(root->right);
        
        res = max(res,lh+rh+1);
        
        return 1 + max(lh,rh);
        
    }
    
    int diameter(Node* root) {
        
        if(root == NULL) return 0;
            
        height(root);
        return res;
        
    }

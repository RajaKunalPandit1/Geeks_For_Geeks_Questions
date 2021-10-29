Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.1/1.3
Your Accuracy:
50%
Attempts No.:
2

/*struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution{
  public:
    /*You are required to complete this method*/
    int minDepth(Node *root) {
        if(root == NULL){
            return INT_MAX;
        }
        
        if(root->left == NULL && root->right == NULL){
            return 1;
        }
        
        return 1 + min(minDepth(root->left),minDepth(root->right));
    }
};

// Another Solution 

class Solution{
  public:
    int minDepth(Node *root) {
        if (root == NULL) return 0;
    
        if (root->left == NULL and root->right == NULL) return 1;
        // no child nodes indicate base case
    
        int left, right;
        if (root->left != NULL) left = minDepth(root->left);
        // finding depth of left sub tree
        else
            left = INT_MAX;
    
        if (root->right != NULL) right = minDepth(root->right);
        // finding depth of right sub tree
        else
            right = INT_MAX;
    
        return 1 + min(left, right);
    }

};

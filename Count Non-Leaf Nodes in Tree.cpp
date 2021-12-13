Output Status : 

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.1/1.1
Your Accuracy:
100%
Attempts No.:
1


/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        
        if((root == NULL) || (root->left == NULL && root->right == NULL)){
            return 0;
        }
        
        if(root->left!= NULL || root->right != NULL){
            return 1+countNonLeafNodes(root->right) + countNonLeafNodes(root->left);
        }
        
    }
};

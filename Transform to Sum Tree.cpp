Output Status :

Problem Solved Successfully
Test Cases Passed: 
110 /110
Total Points Scored: 
2 /2
Your Total Score: 
1799
Total Time Taken: 
0.22
Your Accuracy: 
100%
Attempts No.: 
1

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    
    int solve(Node *node){
        if(node == NULL){
            return 0;
        }
        int leftSum = solve(node->left);
        int rightSum = solve(node->right);
    
        int total = leftSum + rightSum + node->data;
        
        node->data = leftSum + rightSum;
        return total;
        
    }
    
    void toSumTree(Node *node)
    {
        solve(node);
    }
};

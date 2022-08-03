Output Status : 

Problem Solved Successfully
Test Cases Passed: 
101 /101
Total Points Scored: 
2 /2
Your Total Score: 
1249
Total Time Taken: 
0.16
Your Accuracy: 
100%
Attempts No.: 
1


/*
struct Node {
int data;
Node * right, * left;
};*/

class Solution{
  public:
    /*The function should return the root of the modified tree*/
    Node *helper(Node *root, int k){
        
        if(!root) return NULL;
        if(root->data >= k) return helper(root->left,k);
        
        if(root->data < k){
            root->right = helper(root->right,k);
        }
        return root;
    }
    
    Node* deleteNode(Node* root, int k)
    {
        return helper(root,k);
    }
};

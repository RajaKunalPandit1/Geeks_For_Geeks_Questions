Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/1.1
Your Accuracy:
100%
Attempts No.:
1
  
  
  class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void Inorder(Node *root, vector<int>&res){
        if(root){
            Inorder(root->left,res);
            res.push_back(root->data);
            Inorder(root->right,res);
        }
    }
    
    vector<int> inOrder(Node* root) {
        
        vector<int> res;
        Inorder(root,res);
        return res;
    }
};

// Another Solution

class Solution {
  public:
    // Function to find the inorder traversal of the tree.
    void inorderUtil(Node *root, vector<int> &res) {
        // inorder traversal works on Left Root Right.

        // if root is null then we simply return.
        if (root == NULL) return;

        // first, we call the recursive function for left subtree.
        inorderUtil(root->left, res);
        // then we store the data at root in a list.
        res.push_back(root->data);
        // then we call the recursive function for right subtree.
        inorderUtil(root->right, res);
    }

  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(struct Node *root) {
        vector<int> res;
        inorderUtil(root, res);
        // returning the list.
        return res;
    }
};

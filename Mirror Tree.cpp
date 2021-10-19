Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.1/1.1
Your Accuracy:
100%
Attempts No.:
1


/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
       if(node){
           
           mirror(node->right);
           mirror(node->left);
        
           Node *temp = node->right;
           node->right = node->left;
           node->left = temp;
           
       }
    }
};

// Another Solution 

class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        if (node == NULL) return;

        // calling mirror function recursively for left and right subtrees.
        mirror(node->left);
        mirror(node->right);

        // swapping the left and right subtree.
        swap(node->left, node->right);
    }
};

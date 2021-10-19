Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.1/1.1
Your Accuracy:
33%
Attempts No.:
3

//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */
int countLeaves(Node* root)
{
     int res =0;
     
     if(root == NULL){
         return 0;
     }
     if(root->left == NULL && root->right == NULL){
         return 1;
     }
     return countLeaves(root->left)+countLeaves(root->right);
     
}

// Another Solution 


int countLeaves(struct Node* root)
{
  if (root==NULL)
    return 0;
  if (root->left == NULL && root->right == NULL)
   return 1; 
 return  countLeaves(root->left) + 
  countLeaves(root->right);
}

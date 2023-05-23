Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2337
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

/*
struct Node
{
        int data;
        struct Node *left, *right;
};
*/
// your task is to complete this function
// function should create a new binary tree
// function should return the root node to the 
// new binary tree formed
class Solution{
  public:
      Node* constructBinaryTree(int pre[], int preMirror[], int size, int l=0, int a=0)
    {
        Node*n = new Node(pre[l++]);
        if(size == 1)
            return n;
        a++;
        n->left = constructBinaryTree(pre, preMirror, size/2,l,a+size/2 );
        n->right = constructBinaryTree(pre, preMirror, size/2,l+size/2,a);
        return n;
    }
};

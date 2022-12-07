Output Status : 

Problem Solved Successfully
Test Cases Passed: 
30 /30
Total Points Scored: 
4 /4
Your Total Score: 
1687
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1


/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    // Return the Kth smallest element in the given BST
    int c = 0;
    int ans = -1;

    void solve(Node* root,int K){

        if(root==NULL) return;
        solve(root->left,K);
        c++;

        if(c==K){
            ans = root->data;
        }

        solve(root->right,K);
    }

    int KthSmallestElement(Node *root, int K) {
        solve(root,K);
        return ans;
    }
};

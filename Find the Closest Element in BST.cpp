Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /120
Total Points Scored: 
4 /4
Your Total Score: 
2396
Total Time Taken: 
0.07
Your Accuracy: 
100%
Attempts No.: 
1

/*
Tree Node
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

class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
    int minDiff(Node *root, int K)
    {
        if(root == NULL){
            return 1e9;
        }
        
        return min({abs(K-root->data),minDiff(root->left,K),minDiff(root->right,K)});
    
    }
};

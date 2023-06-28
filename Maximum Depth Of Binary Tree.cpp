Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2615
Total Time Taken: 
0.07
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        
        if(root == NULL) return 0;
        
        return 1 + max(maxDepth(root->left),maxDepth(root->right));

    }
};

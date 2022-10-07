Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1020 /1020
Total Points Scored: 
4 /4
Your Total Score: 
1446
Total Time Taken: 
0.02
Your Accuracy: 
100%
Attempts No.: 
1


class Solution
{
    public:
    Node *prev = NULL;
    void flatten(Node *root)
    {
        if(!root){
            return;
        }
        flatten(root->right);
        flatten(root->left);
        
        root->right = prev;
        root->left = NULL;
        prev = root;
        return;
    }
};

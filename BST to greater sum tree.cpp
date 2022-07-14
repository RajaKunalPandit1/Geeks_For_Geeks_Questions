Output Status : 

Problem Solved Successfully 
 Test Cases Passed:
30 / 30
Total Points Scored:
4/4
Total Time Taken:
0.04/1.05
Your Accuracy:
100%
Attempts No.:
1



/*struct Node
{
	int data;
	struct Node *left, *right;
};*/

class Solution
{
    public:
    
    void transformTree(struct Node *root, int &sum){
        
        if(!root) return;
        
        transformTree(root->right,sum);
        sum += root->data;
        root->data = sum - root->data;
        transformTree(root->left,sum);
        
    }
    
    void transformTree(struct Node *root)
    {
       int sum = 0;
       
       transformTree(root,sum);
    }
};

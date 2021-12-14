Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.3/1.6
Your Accuracy:
100%
Attempts No.:
1

/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution
{
public:

    void level(Node *root, int depth,int &res){
        
        if(root){
            if(root->left == NULL && root->right == NULL && depth%2 == 1){
            res = max(res,depth);
        }
        
        level(root->left,depth+1,res);
        level(root->right,depth+1,res);
    }
        
}

    int depthOfOddLeaf(Node *root)
    {
        int depth = 1;
        int res = 0;
        
        level(root,depth,res);
        return res;
    }
};

// Another Solution

class Solution
{
public:
    int depthOfOddLeaf(Node *root)
    {
        int level = 1;
        return depthOfOddLeafUtil(root, level);
    }
    int depthOfOddLeafUtil(Node *root, int level)
    {
        // Base Case
        if (root == NULL)
            return 0;

        // If this node is a leaf and its level is odd, return its level
        if (root->left == NULL && root->right == NULL && level & 1)
            return level;

        // If not leaf, return the maximum value from left and right subtrees
        return max(depthOfOddLeafUtil(root->left, level + 1),
                   depthOfOddLeafUtil(root->right, level + 1));
    }
};

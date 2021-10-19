Output Status:

Problem Solved Successfully 
Total Points Scored:
4/4
Total Time Taken:
0.0/1.0
Your Accuracy:
100%
Attempts No.:
1

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
       
       if(node == NULL){
           return 0;
       }
       int res = max(height(node->right),height(node->left));
       return (res+1);
    }
};

// Another Solution 



class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node)
    {
        //if node is null, we return 0.
        if (node==NULL)
            return 0;

        //else we call the recursive function, height for left and right 
        //subtree and choose their maximum. we also add 1 to the result
        //which indicates height of root of the tree.
        else
            return 1 + max(height(node->left), height(node->right));
    }    
};


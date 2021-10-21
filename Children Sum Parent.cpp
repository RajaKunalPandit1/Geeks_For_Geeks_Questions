Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.0
Your Accuracy:
33%
Attempts No.:
3

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
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
   
   int sumUtil(Node *root) {
        if(!root) return 0;
        return root->data;
    }
   
    int isSumProperty(Node *root)
    {
         int res = 1;
         if(root == NULL||(root->left == NULL && root->right == NULL)){
             return 1;
         }else{
             return (root->data == sumUtil(root->left)+sumUtil(root->right) && isSumProperty(root->left) && isSumProperty(root->right));
         }
    }
};

// Another Solution 

class Solution{
public:
//Function to check whether all nodes of a tree have the value 
//equal to the sum of their child nodes.
int isSumProperty(struct Node *node) 
{
    int left_data = 0, right_data = 0;

    //if node is null or both child nodes are null, we return true.
    if (node == NULL ||(node->left == NULL && node->right == NULL))
        return 1;
        
    else {

        //if left child is not null then we store its value.
        if (node->left != NULL)
            left_data = node->left->data;

        //if right child is not null then we store its value.
        if (node->right != NULL)
            right_data = node->right->data;

        //if sum of stored data of left and right child is equal to the current
        //node data and recursively for the left and right subtree, parent data 
        //is equal to sum of child data then we return true.
        if ((node->data == left_data + right_data) &&
            isSumProperty(node->left) &&
            isSumProperty(node->right))
            return 1;
            
        //else we return false.
        else
            return 0;
    }
}
};

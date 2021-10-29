Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.1/1.1
Your Accuracy:
100%
Attempts No.:
1

/*Structure of the node of the binary tree
struct Node
{
	int key;
	Node* left, *right;
};
*/
// Function should return the sum of all the elements
// of the binary tree
long int sumBT(Node* root)
{

    
    if(root == NULL){
        return 0;
    }
    return root->key + sumBT(root->left) + sumBT(root->right);
    
}



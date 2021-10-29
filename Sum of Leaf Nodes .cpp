Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/1.0
Your Accuracy:
50%
Attempts No.:
2


/*Structure of the node of the binary tree is as
struct Node
{
	int data;
	Node *left, *right;
};*/
// function should return the sum of all the 
// leaf nodes of the binary tree 
int sumLeaf(Node* root)
{
   if(root == NULL){
       return 0;
   }
        
    if(root->left == NULL && root->right == NULL){
        return root->data;
    }else{
        return sumLeaf(root->left) + sumLeaf(root->right);
    }
}

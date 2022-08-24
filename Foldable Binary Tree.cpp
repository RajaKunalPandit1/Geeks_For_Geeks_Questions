Output Stauts : 

Problem Solved Successfully
Test Cases Passed: 
316 /316
Total Points Scored: 
4 /4
Your Total Score: 
1306
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1


/* A binary tree node has data, pointer to left child
and a pointer to right child */
/*struct node
{
    int data;
    struct node* left;
    struct node* right;
    
    node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

//Function to check whether a binary tree is foldable or not.

bool helper(Node *l, Node *r){
    
    if((!l && r) || (l && !r)) return false;
    
    if(!l && !r) return true;
    return helper(l->left,r->right) * helper(l->right,r->left);
    
}


bool IsFoldable(Node* root)
{
   
   if(!root) return true;
   return helper(root->left,root->right);
}

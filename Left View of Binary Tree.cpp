Output Status : 

Problem Solved Successfully
Test Cases Passed: 
603 /603
Total Points Scored: 
2 /2
Your Total Score: 
2489
Total Time Taken: 
0.21
Your Accuracy: 
20%
Attempts No.: 
5

/* A binary tree node

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
 
 
static void func(Node *root, int level, vector<int> &res){
     
     if(root == NULL) return;
     
     if(res.size() == level){
         res.push_back(root->data);
        //  max_leve = level;
     }
     func(root->left,level+1,res);
     func(root->right,level+1,res);
 
 }

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   
   vector<int> res;
   func(root,0,res);
   return res;
   
}

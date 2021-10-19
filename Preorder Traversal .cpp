Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.2/1.4
Your Accuracy:
100%
Attempts No.:
1

/* A binary tree node has data, pointer to left child
   and a pointer to right child  

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

//Function to return a list containing the preorder traversal of the tree.

void Preorder(Node *root,vector<int>&res){
    if(root){
        res.push_back(root->data);
        Preorder(root->left,res);
        Preorder(root->right,res);
    }
}

vector <int> preorder(Node* root)
{
     vector<int> res;
     Preorder(root,res);
     return res;
     
}

// Another Solution

/* Computes the number of nodes in a tree. */



//Function to find the preorder traversal of the tree.
void preorderUtil(struct Node* root, vector <int> &res)
{
  //preorder traversal works on Root Left Right.
  
  //if root is null then we simply return.
  if (root==NULL) 
    return;
    
  //first, we store the data at root in a list.
  res.push_back (root->data);
  //then we call the recursive function for left subtree.
  preorderUtil(root->left, res);
  //then we call the recursive function for right subtree.
  preorderUtil(root->right, res);
}

//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder (Node *root)
{
    vector <int> res;
    preorderUtil (root, res);
    
    //returning the list.
    return res;
}

Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.1/1.2
Your Accuracy:
100%
Attempts No.:
1


void Postorder(Node *root,vector<int>&res){
    if(root){
        Postorder(root->left,res);
        Postorder(root->right,res);
        res.push_back(root->data);
    }
}

vector <int> postOrder(Node* root)
{
      vector<int> res;
      Postorder(root,res);
      return res;
      
}

// Another Solution 

//Back-end complete function Template for C++

//Function to find the postorder traversal of the tree.
void postOrderUtil(struct Node* root, vector <int> &res)
{
    //postorder traversal works on Left Right Root.
          
    //if root is null then we simply return.
    if(root==NULL)
        return;
        
    //first, we call the recursive function for left subtree.
    postOrderUtil(root->left, res);
    //then we call the recursive function for right subtree.
    postOrderUtil(root->right, res);
    //then we store the data at root in a list.
    res.push_back (root->data);
}

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder (Node *root)
{
    vector <int> res;
    postOrderUtil (root, res);
    //returning the list.
    return res;
}

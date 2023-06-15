Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
310 /310
Your Total Score: 
2487
Total Time Taken: 
0.2
Correct Submission Count: 
2
Attempts No.: 
2



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

void func(Node *root, vector<int> &res){
    
    if(root != NULL){
        res.push_back(root->data);
        func(root->left,res);
        func(root->right,res);
    }
    
}

//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
  
  vector<int> res;
  func(root,res);
  return res;
  
}

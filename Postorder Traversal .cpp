Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
130 /130
Your Total Score: 
2487
Total Time Taken: 
0.12
Correct Submission Count: 
2
Attempts No.: 2

//User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

void func(Node *root, vector<int> &res){
    
    if(root != NULL){
        
        func(root->left,res);
        func(root->right,res);
        res.push_back(root->data);    
    }
}

//Function to return a list containing the postorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  
    vector<int> res;
    func(root,res);
    return res;
}

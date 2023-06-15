Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
110 /110
Your Total Score: 
2487
Total Time Taken: 
0.16
Correct Submission Count: 
3
Attempts No.: 
9

/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

void func(Node *root,int k, vector<int> &res){
    
    if(root == NULL) return;
    
    if(k == 0){
        res.push_back(root->data);
    }else{
        func(root->left,k-1,res);
        func(root->right,k-1,res);
    }
}

// function should print the nodes at k distance from root
vector<int> Kdistance(struct Node *root, int k)
{
  
  vector<int>res;
  func(root,k,res);
  return res;
  
}

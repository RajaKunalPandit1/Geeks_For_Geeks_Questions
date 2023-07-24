Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2711
Total Time Taken: 
0.07
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
}; */

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    void recursion(Node* root, int level,vector<int>&res){
        if(root==NULL)  return;
        
        if(res.size()==level)  res.push_back(root->data);
        
        recursion(root->right,level+1,res);
        recursion(root->left,level+1,res);
    }
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>res;
       recursion(root,0,res);
       return res;
    }
};

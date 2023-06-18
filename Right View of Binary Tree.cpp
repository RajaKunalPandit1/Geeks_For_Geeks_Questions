Output Status : 

Problem Solved Successfully
Test Cases Passed: 
68 /68
Total Points Scored: 
2 /2
Your Total Score: 
2511
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

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
    
    void func(Node *root,vector<int> &res,int level){
        
        if(root == NULL) return;
        
        if(res.size() == level) res.push_back(root->data);
        
        func(root->right,res,level+1);
        func(root->left,res,level+1);
        
    }
    
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       
        vector<int> res;
        
        if(root == NULL) return res;
        
        func(root,res,0);
        return res;
       
    }
};

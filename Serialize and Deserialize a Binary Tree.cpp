Output Status : 

Problem Solved Successfully
Test Cases Passed: 
306 /306
Total Points Scored: 
4 /4
Your Total Score: 
2535
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1

/*
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */


class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    
    void func1(Node *root, vector<int> &res){
        
        if(root == NULL){
            res.push_back(-1);
            return;
        }
        res.push_back(root->data);
        func1(root->left,res);
        func1(root->right,res);
    }
    
    vector<int> serialize(Node *root) 
    {
        vector<int> res;
        func1(root,res);
        return res;
    }
    
    //Function to deserialize a list and construct the tree.
    
    int idx = 0;
    
    Node * deSerialize(vector<int> &arr)
    {
       
       int n = arr.size();
       
       if(idx == n){
           return NULL;
       }
       
       int val = arr[idx];
       idx++;
       
       if(val == -1){
           return NULL;
       }
       
       Node *root = new Node(val);
       root->left = deSerialize(arr);
       root->right = deSerialize(arr);
       
       return root;
    }
};

Output Status : 

Problem Solved Successfully
Test Cases Passed: 
70 /70
Total Points Scored: 
2 /2
Your Total Score: 
2509
Total Time Taken: 
0.05
Your Accuracy: 
25%
Attempts No.: 
4

//User function Template for C++

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

void func(Node *root, vector<int> &res){
    
    if(root == NULL) return;
    
    if((root->left != NULL && root->right == NULL)){
        res.push_back(root->left->data);
        
    }else if((root->right != NULL) && (root ->left == NULL)){
        res.push_back(root->right->data);
    }
    
    func(root->left,res);
    func(root->right,res);
}

vector<int> noSibling(Node* node)
{
    
    vector<int> res;
    
    if(node == NULL) return res;
    
    func(node,res);
    if(res.size() == 0) return {-1};
    
    sort(res.begin(),res.end());
    
    return res;
    
}

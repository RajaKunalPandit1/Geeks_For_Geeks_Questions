Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2715
Total Time Taken: 
0.34
Your Accuracy: 
100%
Attempts No.: 
1


//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
	int data;
	struct Node *left, *right;
};
*/
    // your task is to complete this function

bool help (Node *root, int target, vector<int> &parents){
    
    if(root == NULL) return false;
    
    parents.push_back(root->data);
    if(root->data == target) return true;
    
    if(help(root->left,target,parents) || help(root->right,target,parents)){
        return true;
    }
    
    parents.pop_back();
    return false;
}


int kthAncestor(Node *root, int k, int node)
{
    
    vector<int> parents;
    
    help(root,node,parents);
    
    int n = parents.size();
    
    if(n > k){
        return parents[n-k-1];
    }
    
    return -1;
}

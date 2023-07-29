Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2723
Total Time Taken: 
0.22
Your Accuracy: 
50%
Attempts No.: 
2

/*
Structure of the binary Search Tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// your task is to complete the Function

void func(struct Node *root,vector<int> &res){
    
    if(root != NULL){
        func(root->left,res);
        res.push_back(root->data);
        func(root->right,res);
    }
    
}

// Function should return median of the BST
float findMedian(struct Node *root)
{
    vector<int> res;
    
    func(root,res);
    float ans = 0.0;
    
    int n = res.size();
    
    int idx = n/2;
    
    if(n%2 == 0){
        
        ans = float(float((res[idx] + res[idx-1]))/2);
    }else{
        ans = res[idx];
    }
    return ans;
}

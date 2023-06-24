Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
80 /80
Your Total Score: 
2565
Total Time Taken: 
0.09
Correct Submission Count: 
2
Attempts No.: 
6

/*
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

class Solution {
  public:
    
    int res = -1;
    int cnt = 0;
    
    void func(Node *root, int k){
        
        if(root == NULL) return;
        
        func(root->left,k);
        
        cnt++;
        
        if(cnt == k){
            res = root->data; return;
        }
        
        func(root->right,k);
    }
  
    int KthSmallestElement(Node *root, int k) {
        
        func(root,k);
        return res;
        
    }
};

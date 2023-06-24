Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
165 /165
Your Total Score: 
2567
Total Time Taken: 
0.08
Correct Submission Count: 
2
Attempts No.: 
2

/*struct Node
{
    int data;
    struct Node *left, *right;
};*/

class Solution {
  public:
    
    Node *first = NULL,*second = NULL,*prev = NULL;
  
    void func(Node *root){
        
        if(root == NULL) return;
        
        func(root->left);
        
        if(prev!= NULL && root->data <= prev->data){
            
            if(first == NULL){
                first = prev;
            }
            second = root;
        }
        prev = root;
        func(root->right);
    }
  
    struct Node *correctBST(struct Node *root) {
        
        func(root);
        swap(first->data,second->data);
        return root;
    }
};

Output Status : 

Problem Solved Successfully
Test Cases Passed: 
165 /165
Total Points Scored: 
8 /8
Your Total Score: 
1959
Total Time Taken: 
0.07
Your Accuracy: 
100%
Attempts No.: 
1

/*struct Node
{
    int data;
    struct Node *left, *right;
};*/

class Solution {
  public:
    void fixBST(Node *root, Node *&prev, Node *&first, Node *&second){
        
        if(root == NULL){
            return;
        }
        
        fixBST(root->left,prev,first,second);
        
        if(prev != NULL && root->data < prev->data){
            if(first == NULL){
                first = prev;
            }
            second = root;
        }
        prev = root;
        fixBST(root->right,prev,first,second);
    }
  
    struct Node *correctBST(struct Node *root) {
        Node *prev = NULL, *first = NULL, *second = NULL;
        fixBST(root,prev,first,second);
        swap(first->data,second->data);
        return root;
    }
};

Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
131 /131
Your Total Score: 
2493
Total Time Taken: 
0.11
Correct Submission Count: 
3
Attempts No.: 
3

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
};
 */

// This function should return head to the DLL
class Solution
{
    public: 
    Node *prev = NULL;
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root)
    {
        if(root == NULL) return root;
        
        Node *head = bToDLL(root->left);
        
        if(prev == NULL){
            head = root;
        }else{
            root->left = prev;
            prev->right = root;
        }
        prev = root;
        
        bToDLL(root->right);
        return head;
    }
};

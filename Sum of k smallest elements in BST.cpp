Output Status : 

Problem Solved Successfully
Test Cases Passed: 
112 /112
Total Points Scored: 
2 /2
Your Total Score: 
1356
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1



//User function Template for C++

/*
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/

// Function to find ceil of a given input in BST. If input is more 
// than the max key in BST, return -1 
int sum(Node* root, int k) 
{ 
  
    Node *curr = root;
    Node *pre;
    int res = 0;
    
    while(curr && k){
        
        if(curr->left == NULL){
            
            res += curr->data;
            k--;
            curr = curr->right;
            
        }else{
            
            pre = curr->left;
            while(pre->right != NULL && pre->right != curr){
                pre = pre->right;
            }
            
            if(pre->right == NULL){
                pre->right = curr;
                curr = curr->left;
            }else{
                
                pre->right = NULL;
                res += curr->data;
                k--;
                curr = curr->right;
                
            }   
        }
    }
    return res;
} 

Output Status :

Problem Solved Successfully
Test Cases Passed: 
405 /405
Total Points Scored: 
4 /4
Total Time Taken: 
0.27 /1.58
Your Accuracy: 
100%
Attempts No.: 
1

// Time : O(logN)

// User function Template for C++

// Function to return the ceil of given number in BST.
int findCeil(Node* root, int input) {
    if (root == NULL) return -1;
    
    int ceil = -1;
    
    while(root){
        
        if(root-> data == input){
            return root->data;
        }
        
        if(root->data > input){
            ceil = root->data;
            root = root->left;
        }else{
            root = root->right;
        }
    }
    return ceil;
}

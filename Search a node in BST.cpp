Output Status : 

Problem Solved Successfully
Test Cases Passed: 
220 /220
Total Points Scored: 
1 /1
Your Total Score: 
2540
Total Time Taken: 
0.16
Your Accuracy: 
100%
Attempts No.: 
1

// Function to search a node in BST.
bool search(Node* root, int x) {
    
    if(root == NULL) return false;
    
    if(root->data == x){
        return true;
    }else if(root->data > x){
        search(root->left,x);
    }else{
        search(root->right,x);
    }
}

// Iterative.

// Function to search a node in BST.
bool search(Node* root, int x) {
    
    if(root == NULL) return false;
    
    while(root!=NULL){
        
        if(root->data == x){
            return true;
        }else if(root->data > x){
            root = root->left;
        }else{
            root = root->right;
        }
    }
    return false;
}

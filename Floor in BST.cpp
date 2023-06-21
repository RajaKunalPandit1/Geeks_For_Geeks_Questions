Output Status : 

Problem Solved Successfully
Test Cases Passed: 
220 /220
Total Points Scored: 
4 /4
Your Total Score: 
2552
Total Time Taken: 
0.16
Your Accuracy: 
100%
Attempts No.: 
1

// Function to search a node in BST.

int floor(Node* root, int x) {
    
    int res = -1;
    
    Node *curr = root;
    
    while(curr != NULL){
        
        if(curr->data > x){
            curr = curr->left;
        }else{
            res = curr->data;
            curr = curr->right;
        }
    }
    return res;
}

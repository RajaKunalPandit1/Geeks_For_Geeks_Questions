Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
405 /405
Your Total Score: 
2552
Total Time Taken: 
0.28
Correct Submission Count: 
2
Attempts No.: 
2


// User function Template for C++

// Function to return the ceil of given number in BST.
int findCeil(Node* root, int x) {
    
    int res = -1;
    
    Node *curr = root;
    
    while(curr != NULL){
        
        if(curr->data < x){
            curr = curr->right;
        }else{
            res = curr->data;
            curr = curr->left;
        }
    }
    return res;
}

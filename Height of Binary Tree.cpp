Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
222 /222
Your Total Score: 
2487
Total Time Taken: 
0.02
Correct Submission Count: 
3
Attempts No.: 
3


    //Function to find the height of a binary tree.
    int height(struct Node* node){
        
        if(node == NULL){
            return 0;
        }
        return (max(height(node->left),height(node->right))+1);
    }
    

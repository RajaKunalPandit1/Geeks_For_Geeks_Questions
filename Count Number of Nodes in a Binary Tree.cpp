Output Status : 

Problem Solved Successfully
Test Cases Passed: 
2530 /2530
Total Points Scored: 
2 /2
Your Total Score: 
2503
Total Time Taken: 
0.1
Your Accuracy: 
100%
Attempts No.: 
1

    int countNodes(Node* root) {
        
        if(root == NULL) return 0;
        
        return (1+countNodes(root->left)+countNodes(root->right));
    }

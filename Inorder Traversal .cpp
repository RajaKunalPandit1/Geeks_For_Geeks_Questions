Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
49 /49
Your Total Score: 
2487
Total Time Taken: 
0.01
Correct Submission Count: 
2
Attempts No.: 
2

    void func(Node *root, vector<int> &v){
        
        if(root != NULL){
            func(root->left,v);
            v.push_back(root->data);
            func(root->right,v);
        }
    }
  
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        
        vector<int> res;
        
        func(root,res);
        return res;
    }
    
    

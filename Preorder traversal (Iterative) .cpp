Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
35 /35
Your Total Score: 
2539
Total Time Taken: 
0.17
Correct Submission Count: 
2
Attempts No.: 
2

    void func(Node *root, vector<int> &res){
        
        stack<Node *> st;
        Node *curr = root;
        
        while(curr != NULL || !st.empty()){
            
            while(curr != NULL){
                
                res.push_back(curr->data);
                st.push(curr);
                curr = curr->left;
            }
            
            curr = st.top();
            st.pop();
            curr = curr->right;
        }
    }
    
    vector<int> preOrder(Node* root)
    {
        
        vector<int> res;
        func(root,res);
        return res;
        
    }

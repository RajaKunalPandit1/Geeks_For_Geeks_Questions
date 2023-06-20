Output Status : 

Problem Solved Successfully
Test Cases Passed: 
40 /40
Total Points Scored: 
4 /4
Your Total Score: 
2539
Total Time Taken: 
0.28
Your Accuracy: 
100%
Attempts No.: 
1

    void func(Node *root,vector<int> &res){
        
        stack<Node *> st;
        Node *curr = root;
        
        while(curr != NULL || !st.empty()){
            
            while(curr != NULL){
                st.push(curr);
                curr = curr->left;
            }
            curr = st.top(); st.pop();
            res.push_back(curr->data);
            curr = curr->right;
        }
    }

    vector<int> inOrder(Node* root){
        vector<int> res;
        func(root,res);
        return res;
        
    }

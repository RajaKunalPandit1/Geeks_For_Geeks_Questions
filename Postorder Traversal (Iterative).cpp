Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
125 /125
Your Total Score: 
2539
Total Time Taken: 
0.15
Correct Submission Count: 
2
Attempts No.: 
2

    void func(Node *node, vector<int> &res){
        
        stack<Node *> st;
        
        st.push(node);
        
        while(!st.empty()){
            
            Node *temp = st.top();
            st.pop();
            
            res.push_back(temp->data);
            
            if(temp->left != NULL){
                st.push(temp->left);
            }
            
            if(temp->right != NULL){
                st.push(temp->right);
            }
        }
        reverse(res.begin(),res.end());
    }
    
    vector<int> postOrder(Node* node) {
        
        vector<int> res;
        func(node,res);
        return res;
    }

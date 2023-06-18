Output Status : 

Problem Solved Successfully
Test Cases Passed: 
110 /110
Total Points Scored: 
2 /2
Your Total Score: 
2515
Total Time Taken: 
0.24
Your Accuracy: 
100%
Attempts No.: 
1

/*   
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
vector<int> reverseLevelOrder(Node *root)
{
    
    vector<int> res;
    
    if(root == NULL) return res;
    
    stack<int> st;
    
    queue<Node *> q;
    
    q.push(root);
    
    while(!q.empty()){
        
        Node *curr = q.front();
        q.pop();
        
        st.push(curr->data);
        
        if(curr->right != NULL) q.push(curr->right);
        if(curr->left != NULL) q.push(curr->left);
    }
    
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    
    return res;
    
}


Output Status: 

Problem Solved Successfully 
Total Points Scored:
4/4
Total Time Taken:
0.2/2.2
Your Accuracy:
100%
Attempts No.:
1


/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};
*/
class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        
        
        stack<Node *> st;
        vector<int> res; 
        
        Node *curr = root;
        
        while(!st.empty() || curr != NULL){
            
            while(curr!= NULL){
                res.push_back(curr->data);
                if(curr->right!= NULL){
                    st.push(curr->right);
                }
                curr = curr->left;
            }
            
            if(!st.empty()){
                curr = st.top();
                st.pop();
            }
            
        }
        return res;
        
    }
   };
   
   // Another Solution 
   
   
   class Solution{
    public:
vector<int> preOrder(Node* root)
{



    // Create an empty stack and push root to it
    stack<Node*> nodeStack;
    nodeStack.push(root);
    vector<int> v;

    /* Pop all items one by one. Do following for every popped item
       a) print it
       b) push its right child
       c) push its left child
    Note that right child is pushed first so that left is processed first */
    while (nodeStack.empty() == false) {
        // Pop the top item from stack and print it
        struct Node* node = nodeStack.top();
        v.push_back(node->data);
        nodeStack.pop();

        // Push right and left children of the popped node to stack
        if (node->right)
            nodeStack.push(node->right);
        if (node->left)
            nodeStack.push(node->left);
    }

    return v;

}
};

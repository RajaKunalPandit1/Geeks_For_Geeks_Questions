Output Status : 

Problem Solved Successfully
Test Cases Passed: 
131 /131
Total Points Scored: 
8 /8
Your Total Score: 
1318
Total Time Taken: 
0.11
Your Accuracy: 
100%
Attempts No.: 
1


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// This function should return head to the DLL
class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    
    vector<Node *> in;
    
    void inor(Node *r){
        
        if(r == NULL) return;
        inor(r->left);
        in.push_back(r);
        inor(r->right);
    }
    
    Node * bToDLL(Node *root)
    {
        inor(root);
        in[0]->left = NULL;
        
        for(int i=0;i<in.size()-1;i++){
            in[i]->right = in[i+1];
            in[i+1]->left = in[i];
        }
        in[in.size()-1]->right = NULL;
        return in[0];
    }
};

Output Status : 

Problem Solved Successfully
Test Cases Passed: 
2010 /2010
Total Points Scored: 
2 /2
Your Total Score: 
1320
Total Time Taken: 
0.25
Your Accuracy: 
100%
Attempts No.: 
1

/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
{
public:
    Node *nextRight(Node *root, int key)
    {
        
        queue<Node *> q;
        
        q.push(root);
        
        bool isFound = false;
        
        while(!isFound && !q.empty()){
            
            int sz = q.size();
            
            for(int i=0;i<sz;i++){
                
                Node *curr = q.front();
                
                q.pop();
                
                if(isFound){
                    return curr;
                }
                
                if(curr -> data == key){
                    isFound = true;
                }
                
                if(curr->left != NULL){
                    q.push(curr->left);
                }
                
                if(curr->right != NULL){
                    q.push(curr->right);
                }
            }
        }
        return new Node(-1);
    }
};

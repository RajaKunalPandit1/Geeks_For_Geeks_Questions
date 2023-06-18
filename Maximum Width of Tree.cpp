Output Status :

Problem Solved Successfully
Test Cases Passed: 
131 /131
Total Points Scored: 
2 /2
Your Total Score: 
2501
Total Time Taken: 
0.06
Your Accuracy: 
100%
Attempts No.: 
1

/*
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

class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {

        if(root == NULL) return 0;
        
        queue<Node *> q;
        q.push(root);
        
        int res = 0;
        
        while(!q.empty()){
            
            int cnt = q.size();
            res = max(res,cnt);
            
            for(int i=0;i<cnt;i++){
                
                Node *curr = q.front();
                q.pop();
                
                if(curr->left != NULL){
                    q.push(curr->left);
                }
                if(curr->right != NULL){
                    q.push(curr->right);
                }
            }
        }
        return res;
    }
};

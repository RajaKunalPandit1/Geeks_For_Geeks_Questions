Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
1971
Total Time Taken: 
0.31
Your Accuracy: 
100%
Attempts No.: 
1

/* Struct Node {
    int data;
    Node* left;
    Node* right;
    Node* nextRight;
};*/

class Solution{
    public:
    void connect(Node *root)
    {
        queue<Node*> q;

       q.push(root);

       int level = 0;

       while(!q.empty()){
           
           int size = q.size();

           Node *prev = NULL;

           for(int i=0;i<size;i++){
               
               auto curr = q.front();

               q.pop();

               if(prev) prev->nextRight = curr;

               prev=curr;

               if(curr->left) q.push(curr->left);

               if(curr->right) q.push(curr->right);
           }
           level++;
       }
    }    
};

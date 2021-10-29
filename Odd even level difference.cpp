Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.1/1.3
Your Accuracy:
100%
Attempts No.:
1

/*struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution{
  public:
    /*You are required to complete this function*/
    int getLevelDiff(Node *root)
    {
       if(root == NULL){
           return 0;
       }
       return root->data - getLevelDiff(root->left) - getLevelDiff(root->right);
    }
};

// Another Solution 


/* struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution{
  public:
    /*You are required to complete this function*/
    int getLevelDiff(Node *root)
    {
       int level = 1;
       int odd_sum = 0;
       int even_sum = 0;
       
       if(root == NULL){
           return 0;
       }
       
       queue<Node *> q;
       q.push(root);
       
       while(!q.empty()){
           int n = q.size();
           
           if(level%2 == 0){
               
               while(n--){
                   Node *curr = q.front();
                   q.pop();
                   
                   if(curr->left!=NULL){
                       q.push(curr->left);
                   }
                   if(curr->right != NULL){
                       q.push(curr->right);
                   }
                   even_sum += curr->data;
               }
           }else{
                while(n--){
                   Node *curr = q.front();
                   q.pop();
                   
                   if(curr->left!=NULL){
                       q.push(curr->left);
                   }
                   if(curr->right != NULL){
                       q.push(curr->right);
                   }
                   odd_sum += curr->data;
               }
           }
           level++;
       }
       return odd_sum - even_sum;
    }
};

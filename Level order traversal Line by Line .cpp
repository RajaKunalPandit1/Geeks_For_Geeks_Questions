Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
310 /310
Your Total Score: 
2489
Total Time Taken: 
0.22
Correct Submission Count: 
2
Attempts No.: 
3

/* A binary tree Node

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

//Function to return the level order traversal line by line of a tree.
vector<vector<int>> levelOrder(Node* node)
{
  
  vector<vector<int>> res;
  
  if(node == NULL) return res;
  
  queue<Node *> q;
  q.push(node);
  
  while(!q.empty()){
      
      int n = q.size();
      
      vector<int> v;
      
      for(int i=0;i<n;i++){
          
          Node *curr = q.front();
          q.pop();
          
          v.push_back(curr->data);
          
          if(curr->left != NULL) q.push(curr->left);
          
          if(curr->right != NULL) q.push(curr->right);
      }
      res.push_back(v);
  }
  return res;
}

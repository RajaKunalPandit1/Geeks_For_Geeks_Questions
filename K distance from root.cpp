Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.2/1.3
Your Accuracy:
20%
Attempts No.:
5

/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// function should print the nodes at k distance from root

int dist(Node *root,vector<int> &res,int k){
    
    if(root == NULL){
        return 0;
    }else{
        if(k==0){
            res.push_back(root->data);
        }else{
            dist(root->left,res,k-1);
            dist(root->right,res,k-1);
        }
    }
}

vector<int> Kdistance(struct Node *root, int k)
{
     
     vector<int> res;
     dist(root,res,k);
     return res;
     
}

// Another Solution 

// Recursive function to print right view of a binary tree.

void KdistanceUtil(struct Node *root,int k,vector<int> &nodes){
    // Base Case
    if (root==NULL)  return;

    if (k==0)
        nodes.push_back(root->data);

    // Recur for right subtree first, then left subtree
    KdistanceUtil(root->left, k-1,nodes);
    KdistanceUtil(root->right, k-1,nodes);
}

vector<int> Kdistance(struct Node *root, int k)
{
    vector<int> nodes;
    KdistanceUtil(root,k,nodes);
    return nodes;
}

// Another Solution 

/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// function should print the nodes at k distance from root
vector<int> Kdistance(struct Node *root, int k)
{
  
  queue<Node*> q;
  vector<int> v;
  q.push(root);
  int level=0;
  while(!q.empty()){
      int size=q.size();
      for(int i=0;i<size;i++){
          Node* newnode=q.front();
          q.pop();
          int value=newnode->data;
          if(level==k){
              v.push_back(value);
          }
          if(newnode->left){
              q.push(newnode->left);
          }
          if(newnode->right){
              q.push(newnode->right);
          }
      }
      level++;
  }
  return v;
  
}

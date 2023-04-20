Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2201
Total Time Taken: 
0.37
Your Accuracy: 
100%
Attempts No.: 
1

/*
// node structure:

struct Node
{
    int data;
    Node* left;
    Node* right;
};

*/



class Solution{

    void parents(Node*root, unordered_map<Node*,Node*>&mp, Node*&node,int home){
      queue<Node*>q;
      q.push(root);
      while(!q.empty()){
          int n = q.size();
          for(int i = 0;i<n;i++){
               Node*temp = q.front();
               q.pop();
               if(temp->data == home) node = temp;
               if(temp->left){
                   mp[temp->left] = temp;
                   q.push(temp->left);
               }
               if(temp->right){
                   mp[temp->right] = temp;
                   q.push(temp->right);
               }
          }
      }
  }
    public:
    int ladoos(Node* root, int home, int k)
    {
        // Your code goes here
        unordered_map<Node*,Node*>parent;
        Node*h = NULL;
        parents(root,parent,h,home);
        queue<Node*>q;
        unordered_map<Node*,bool>visit;
     //  Node*n = new Node(home);
         visit[h] = true;
         q.push(h);
         int ans = 0;
         ans += h->data;
         int lvl = 0;
         while(!q.empty()){
             int size = q.size();
               if(lvl == k) break;
               lvl++;
             for(int i =0 ;i<size;i++){
                 Node*temp = q.front();
                 q.pop();
                 if(temp->left && !visit[temp->left]){
                     q.push(temp->left);
                     ans += temp->left->data;
                     visit[temp->left] = true;
                 }
                 if(temp->right && !visit[temp->right]){
                     q.push(temp->right);
                     ans += temp->right->data;
                     visit[temp->right] = true;
                 }
                 if(parent[temp] && !visit[parent[temp]]){
                     q.push(parent[temp]);
                     ans += parent[temp]->data;
                     visit[parent[temp]] = true;
                 }
             }
         }
        return ans;
    }

};

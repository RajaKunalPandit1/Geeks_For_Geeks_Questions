Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.1/1.2
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


class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
          vector<int> res;
          
          
          queue <Node *> q;
          q.push(node);
          
          while(!q.empty()){
          Node *curr = q.front();
          q.pop();
          res.push_back(curr->data);
          if(curr->left!=NULL){
              q.push(curr->left);
          }
          if(curr->right != NULL){
              q.push(curr->right);
          }
          
          }
          return res;
    }
};

// Another Solution 

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(struct Node* node)
    {
        vector <int> res;
        
        //if node is null, we return the list.
        if (node == NULL) 
        return res;
        
        //creating an empty queue for level order traversal.
        queue<Node *> q;
    
        q.push(node);
    
        while (q.empty() == false)
        {
            //storing front element of queue in list and removing it from queue.
            Node *node = q.front();
            res.push_back (node->data);
            q.pop();
    
            //storing the left child of the parent node in queue.
            if (node->left != NULL)
                q.push(node->left);
    
            //storing the right child of the parent node in queue.
            if (node->right != NULL)
                q.push(node->right);
        }
        //returning the list.
        return res;
    }

};

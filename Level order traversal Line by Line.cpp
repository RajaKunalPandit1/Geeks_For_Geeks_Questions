Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.2/1.4
Your Accuracy:
50%
Attempts No.:
2

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
        
        queue <Node *> q;
       
       if(node == NULL){
           return res;
       }
        q.push(node);
        
        while(!q.empty()){
            int count = q.size();
            vector<int>v;
            for(int i=0;i<count;i++){
                Node *curr = q.front();
                q.pop();
                v.push_back(curr->data);
                
                if(curr->left != NULL){
                    q.push(curr->left);
                }
                if(curr->right != NULL){
                    q.push(curr->right);
                }
            }
            res.push_back(v);
        }
      return res;
}

// Another Solution 



//Function to return the level order traversal line by line of a tree.
vector<vector<int>> levelOrder(struct Node* node)
{
    //creating an empty queue for level order traversal.
    queue<Node *> q;
    q.push(node);

    vector<vector<int>> result;
    while(1)
    {
        int size = q.size();
        if(size==0)
            break;
        
        //creating a list to store the nodes at a particular level.
        vector<int> level;
    
        while(size>0)
        {
            //storing front element of queue in list and removing it from queue.
            Node * node = q.front();
            q.pop();
            level.push_back(node->data);
            
            //storing the left child of the parent node in queue.
            if(node->left)
                q.push(node->left);

            //storing the right child of the parent node in queue.
            if(node->right)
                q.push(node->right);
            size--;
        }
        //adding the level list in answer.
        result.push_back(level);
    }
    //returning the final list.
    return result;
}

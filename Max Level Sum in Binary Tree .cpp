Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.3/1.7
Your Accuracy:
100%
Attempts No.:
1


/* struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        
        int res = INT_MIN;
        queue<Node *> q;
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            int sum =0;
            for(int i=0;i<n;i++){
                Node *curr = q.front();
                sum += curr->data;
                q.pop();
                
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right != NULL){
                    q.push(curr->right);
                }
            }
            if(sum >res){
                res = sum;
            }
        }
        return res;
        
    }
};

// Another Solution 

class Solution{
  public:
    int maxLevelSum(Node *root) {
        // Base case
        if (root == NULL) return 0;
    
        // Initialize result
        int result = root->data;
    
        // Do Level order traversal keeping track of number
        // of nodes at every level.
        queue<Node *> q;
        q.push(root);
        while (!q.empty()) {
            // Get the size of queue when the level order
            // traversal for one level finishes
            int count = q.size();
    
            // Iterate for all the nodes in the queue currently
            int sum = 0;
            while (count--) {
                // Dequeue an node from queue
                Node *temp = q.front();
                q.pop();
    
                // Add this node's value to current sum.
                sum = sum + temp->data;
    
                // Enqueue left and right children of
                // dequeued node
                if (temp->left != NULL) q.push(temp->left);
                if (temp->right != NULL) q.push(temp->right);
            }
    
            // Update the maximum node count value
            result = max(sum, result);
        }
    
        return result;
    }

};

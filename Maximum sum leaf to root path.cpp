Output Status : 

Problem Solved Successfully
Test Cases Passed: 
113 /113
Total Points Scored: 
4 /4
Your Total Score: 
1244
Total Time Taken: 
0.07
Your Accuracy: 
100%
Attempts No.: 
1

// Time : O(N) [N = Number of Nodes] :: Aux_Space : O(1)
  
class Solution{
    public:
    int maxSum;
    
    void maxPathSum(Node *root, int sum){
        
        if(root == NULL) return;
        
        sum += root->data;
        
        if(root->right == NULL && root->left == NULL){
            if(sum > maxSum){
                maxSum = sum;
            }
        }
        
        maxPathSum(root->left,sum);
        maxPathSum(root->right,sum);
        
    }
    
    int maxPathSum(Node* root)
    {
        
        if(root == NULL) return 0;
        
        maxSum = INT_MIN;
        maxPathSum(root,0);
        return maxSum;  
    }
};

// Another Solution 

void getTargetLeaf(Node* node, int* max_sum_ref, 
                   int curr_sum, Node** target_leaf_ref) 
{ 
    if (node == NULL) 
        return; 
  
    // Update current sum to hold sum of nodes on path 
    // from root to this node 
    curr_sum = curr_sum + node->data; 
  
    // If this is a leaf node and path to this node has 
    // maximum sum so far, then make this node target_leaf 
    if (node->left == NULL && node->right == NULL) { 
        if (curr_sum > *max_sum_ref) { 
            *max_sum_ref = curr_sum; 
            *target_leaf_ref = node; 
        } 
    } 
  
    // If this is not a leaf node, then recur down 
    // to find the target_leaf 
    getTargetLeaf(node->left, max_sum_ref, curr_sum, 
                  target_leaf_ref); 
    getTargetLeaf(node->right, max_sum_ref, curr_sum, 
                  target_leaf_ref); 
} 

class Solution{
    public:
int maxPathSum(Node* root)
{
    // base case 
    if (root == NULL) 
        return 0; 
  
    Node* target_leaf; 
    int max_sum = INT_MIN; 
  
    // find the target leaf and maximum sum 
    getTargetLeaf(root, &max_sum, 0, &target_leaf); 
  
    return max_sum; // return maximum sum 
}
};

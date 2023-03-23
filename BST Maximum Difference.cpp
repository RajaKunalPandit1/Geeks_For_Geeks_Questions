Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2095
Total Time Taken: 
0.02
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
int x = -1 ;
     void solve( Node *root , int target , Node*&node , int curr )
    {
        if(!root)
        {
            return ;
        }
        
        if( root->data == target )
        {
            node = root ;
            x = curr ;
            return ;
        }
        
        if( root->data > target )
        {
            solve( root->left , target , node ,  curr + root->data ) ;
        }
        else{
           solve( root->right , target , node ,  curr + root->data ) ;
        }
    }
    
    int solve2( Node *root )
    {
        if(!root->left && !root->right )
        {
            return root->data ;
        }
        
        if(!root->left && root->right )
        {
            return root->data + solve2( root->right )  ;
        }
        
        if(root->left && !root->right )
        {
            return root->data + solve2( root->left )  ;
        }
        
        return min( root->data + solve2( root->left ) , root->data + solve2( root->right ) ) ;
        
    }
    int maxDifferenceBST(Node *root,int target){
        // Code here
        
        Node *node = NULL ;
       
        
        solve( root , target , node ,  0 ) ;
        
        if( node == NULL ) return -1 ;
        
        int ans = INT_MIN ;
        
        int mn = solve2(node) ;
        
        return x - mn + target  ;
    }
};

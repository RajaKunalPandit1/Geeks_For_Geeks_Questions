Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1025 /1025
Total Points Scored: 
4 /4
Your Total Score: 
2527
Total Time Taken: 
0.23
Your Accuracy: 
20%
Attempts No.: 
5

/*
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
    
    bool func(Node *root,int n,vector<Node *> &v){
        
        if(root == NULL) return false;
        
        v.push_back(root);
        
        if(root->data == n){
            return true;
        }
        
        if(func(root->left,n,v) || func(root->right,n,v)){
            return true;
        }
        v.pop_back();
        return false;
    }
    
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       
      if(root == NULL) 
        return NULL;
       
       vector<Node *> v1,v2;
       
       func(root,n1,v1);
       func(root,n2,v2);
       
    
        root = NULL;
       
       int n = min(v2.size(),v1.size());
       
       for(int i=0;i<n;i++){
           
           if(v1[i] == v2[i]){
               root = v1[i];
           }else{
               return root;
           }
       }
       return root;
    }
};

// Another Solution :: 

    Node* lca(Node* root ,int n1 ,int n2 )
    {
       
       if(root == NULL) return NULL;
       
       if(root->data == n1 || root->data == n2) return root;
       
       Node *lca1 = lca(root->left,n1,n2);
       Node *lca2 = lca(root->right,n1,n2);
       
       if(lca1 != NULL && lca2 != NULL){
           return root;
       }
       
       if(lca1!= NULL) return lca1;
       return lca2;
       
    }

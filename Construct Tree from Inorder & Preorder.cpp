Output Status : 

Problem Solved Successfully
Test Cases Passed: 
305 /305
Total Points Scored: 
4 /4
Your Total Score: 
2497
Total Time Taken: 
0.13
Your Accuracy: 
100%
Attempts No.: 
1


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    
    int preidx = 0;
    
    Node *func(int in[], int pre[], int is, int ie){
        
        if(is > ie) return NULL;
        
        Node *root = new Node(pre[preidx++]);
        
        int inidx = 0;
        
        for(int i=is;i<=ie;i++){
            
            if(in[i] == root->data){
                inidx = i;
                break;
            }
        }
        
        root->left = func(in,pre,is,inidx-1);
        root->right = func(in,pre,inidx+1,ie);
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        return func(in,pre,0,n-1);
    }
};

// Solution Using Hasing :: Time : O(N) :: Aux_Space : O(N)

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    
    int preidx = 0;
    
    Node *func(int in[], int pre[], int is, int ie,unordered_map<int,queue<int>>&mp){
        
        if(is > ie) return NULL;
        
        Node *root = new Node(pre[preidx++]);
        
        int inidx = mp[root->data].front();
        
        mp[root->data].pop();
        
        root->left = func(in,pre,is,inidx-1,mp);
        root->right = func(in,pre,inidx+1,ie,mp);
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        unordered_map<int,queue<int>> mp;
        
        for(int i=0;i<n;i++){
            mp[in[i]].push(i);
        }
        
        return func(in,pre,0,n-1,mp);
    }

Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2711
Total Time Taken: 
0.09
Correct Submission Count: 
2
Attempts No.: 
2

/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */


//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    vector<int> res;
    
    if(root == NULL) return res;
    
    queue<Node *> q;
    q.push(root);
    
    bool flag = true;
    
    while(!q.empty()){
        
        int n = q.size();
        
        vector<int> temp;
        
        for(int i=0;i<n;i++){
            
            Node *curr = q.front();
            q.pop();
            
            temp.push_back(curr->data);
            
            if(curr->left != NULL){
                q.push(curr->left);
            }
            
            if(curr->right != NULL){
                q.push(curr->right);
            }
        }
        
        if(!flag){
            res.insert(res.end(),temp.begin(),temp.end());
        }else{
            reverse(temp.begin(),temp.end());
            res.insert(res.end(),temp.begin(),temp.end());
        }
        flag = !flag;
    }
    return res;
}

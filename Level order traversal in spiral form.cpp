Output Status : 

Problem Solved Successfully
Test Cases Passed: 
80 /80
Total Points Scored: 
2 /2
Your Total Score: 
2491
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1


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
    
    int i=0;
    
    queue <Node *> q;
    q.push(root);
    
    while(!q.empty()){
        
        int n = q.size();
        vector<int> res2;
        
        for(int j=0;j<n;j++){
            
            Node *curr = q.front();
            q.pop();
            
            res2.push_back(curr->data);
            
            if(curr->left != NULL) q.push(curr->left);
            
            if(curr->right != NULL) q.push(curr->right);
            
        }
        
        if(i%2 == 0){
            reverse(res2.begin(),res2.end());
        }
        
        res.insert(res.end(),res2.begin(),res2.end());
        
        i++;
        
    }
    return res;
}


// Another Solution Recursive  

void spiral(Node* node, int level, bool flag, vector<int>& result) {
    if (!node)
        return;

    if (level == 1)
        result.push_back(node->data);
    else if (level > 1) 
    {
        if (flag) 
        {
            spiral(node->left, level - 1, flag, result);
            spiral(node->right, level - 1, flag, result);
        } 
        else 
        {
            spiral(node->right, level - 1, flag, result);
            spiral(node->left, level - 1, flag, result);
        }
    }
}

int height(Node* node) {
    if (!node)
        return 0;

    return 1+max(height(node->left),  height(node->right));
}

vector<int> findSpiral(Node* root) {
    vector<int> result;
    int l = height(root);
    bool flag = false;

    for (int i = 1; i <= l; i++) 
    {
        spiral(root, i, flag,result);
        flag = !flag;
    }

    return result;
}

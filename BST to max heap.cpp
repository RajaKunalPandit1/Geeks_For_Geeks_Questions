Output Status : 

Problem Solved Successfully
Test Cases Passed: 
30 /30
Total Points Scored: 
4 /4
Your Total Score: 
1374
Total Time Taken: 
0.36
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
  public:
    
    void inorder(Node *root, vector<int> &elements){
        
        if(root == NULL) return;
        
        inorder(root->left,elements);
        elements.push_back(root->data);
        inorder(root->right,elements);
        
    }
    
    void fillTree(Node *root, vector<int> &elements,int &idx){
        
        if(root == NULL) return;
        
        fillTree(root->left,elements,idx);
        fillTree(root->right,elements,idx);
        
        root->data = elements[idx];
        ++idx;
        
    }
  
    void convertToMaxHeapUtil(Node* root)
    {
        vector<int> elements;
        inorder(root,elements);
        
        int idx = 0;
        fillTree(root,elements,idx);
        
    }    
};

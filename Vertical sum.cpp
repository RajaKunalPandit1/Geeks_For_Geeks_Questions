Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1110 /1110
Total Points Scored: 
2 /2
Your Total Score: 
2573
Total Time Taken: 
0.43
Your Accuracy: 
100%
Attempts No.: 
1

/*
Node is as follows:
struct Node{
int data;
Node *left,*right;
};
*/
class Solution{
  public:
    
    void func(Node *root,int hd, map<int,int> &mp){
        
        if(root == NULL) return;
        
        func(root->left,hd-1,mp);
        
        mp[hd] += root->data;
        
        func(root->right,hd+1,mp);
        
    }
  
    vector <int> verticalSum(Node *root) {
        
        map<int,int> mp;
        func(root,0,mp);
        
        vector<int> res;
        
        for(auto x: mp){
            res.push_back(x.second);
        }
        return res;
    }
};

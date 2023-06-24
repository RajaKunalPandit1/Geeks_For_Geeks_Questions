Output Status : 

Problem Solved Successfully
Test Cases Passed: 
60 /60
Total Points Scored: 
4 /4
Your Total Score: 
2585
Total Time Taken: 
0.21
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    
    void func(Node *root, map<int,int> &mp){
        
        queue<pair<Node*,int>> q;
        q.push({root,0});
        
        while(!q.empty()){
            
            auto p = q.front();
            q.pop();
            
            Node *curr = p.first;
            int hd = p.second;
            
            mp[hd] = curr->data;
            
            if(curr->left != NULL){
                q.push({curr->left,hd-1});
            }
            
            if(curr->right != NULL){
                q.push({curr->right,hd+1});
            }
        }
    }
  
    vector <int> bottomView(Node *root) {
        
        map<int,int> mp;
        
        func(root,mp);
        
        vector<int> res;
        
        for(auto x : mp){
            res.push_back(x.second);
        }
        return res;
    }

Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1107 /1107
Total Points Scored: 
2 /2
Your Total Score: 
2027
Total Time Taken: 
0.5
Your Accuracy: 
100%
Attempts No.: 
1

/*
 struct Node
 {
     int data;
     Node* left, *right;
}; */

class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        
        map<int,vector<int>>mp;
        
        queue<pair<int,Node*>>q;
        q.push({1,root});
        
        while(!q.empty()){
            
            
            int level = q.front().first;
            Node* node = q.front().second;
            mp[level].push_back(node->data);
            
            q.pop();
            
            if(node->left){
                q.push({level+1,node->left});
            }
               if(node->right){
                q.push({level+1,node->right});
            }
        }
        
        int res = -1e9;
        
        for(auto i : mp){
            int s = 0;
            
            for(auto j : i.second){
                
                s= s+j;
            }
            res = max(res,s);
        }
        return res;
        
    }
};

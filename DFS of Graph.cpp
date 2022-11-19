Output Status : 

Problem Solved Successfully
Test Cases Passed: 
13 /13
Total Points Scored: 
2 /2
Your Total Score: 
1602
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    
    void dfs(vector<int> adj[], vector<bool> &vis,vector<int> &res, int val){
        
        vis[val] = true;
        res.push_back(val);
        
        for(auto x: adj[val]){
            if(!vis[x]){
                dfs(adj,vis,res,x);
            }
        }
    }
  
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        
        vector<bool> vis(v,false);
        vis[0] = true;
        
        vector<int> res;
        dfs(adj,vis,res,0);
        return res;
    }
};

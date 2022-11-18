Output Status : 

Problem Solved Successfully
Test Cases Passed: 
115 /115
Total Points Scored: 
2 /2
Your Total Score: 
1600
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
 public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        
        vector<int> visited(v,-1);
        queue<int> q;
        vector<int> res;
        
        q.push(0);
        
        visited[0] = 1;
        
        while(!q.empty()){
            
            int u = q.front();
            q.pop();
            res.push_back(u);
            
            
            for(auto x : adj[u]){
                if(visited[x] == -1){
                    q.push(x);
                    visited[x] = 1;
                }
            }
        }
        return res;
    }
};

Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1121 /1121
Total Points Scored: 
4 /4
Your Total Score: 
2735
Total Time Taken: 
0.69
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        
        vector<int> dist(N,INT_MAX);
        vector<bool> vis(N,false);
        
        queue<int> w;
        dist[0] = 0;
        
        w.push(0);
        
        while(!w.empty()){
            int curr = w.front();
            w.pop();
            vis[curr] = true;
    
            for (auto x : edges) {
                if (x[0] == curr) {
                    if (dist[x[1]] > dist[curr] + x[2]) {
                        dist[x[1]] = dist[curr] + x[2];
                        w.push(x[1]);
                    }
                }
            }
        }
        
        for(int &x : dist){
            if(x == INT_MAX){
                x = -1;
            }
        }
        return dist;
    }

Output Status : 

Problem Solved Successfully
Test Cases Passed: 
51 /51
Total Points Scored: 
4 /4
Your Total Score: 
2623
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1


    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        
        vector<int> adj[N];
        
        for(int i=0;i<M;i++){
            
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            
        }
        
        vector<int> dist(N,-1);
        
        bool vis[N] = {false};
        
        dist[src] = 0;
        
        queue<int> q;
        q.push(src);
        vis[src] = true;
        
        while(!q.empty()){
            
            int u = q.front();
            q.pop();
            
            for(auto x : adj[u]){
                
                if(!vis[x]){
                    
                    vis[x] = true;
                    dist[x] = 1 + dist[u];
                    q.push(x);
                }
            }
        }
        return dist;
    }

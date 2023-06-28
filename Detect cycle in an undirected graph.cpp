Output Status : 

Problem Solved Successfully
Test Cases Passed: 
210 /210
Total Points Scored: 
4 /4
Your Total Score: 
2627
Total Time Taken: 
0.76
Your Accuracy: 
100%
Attempts No.: 
1

    bool dfs(vector<int> adj[], int s, bool vis[], int parent){
        
        vis[s] = true;
        
        for(auto x : adj[s]){
            
            if(!vis[x]){
                
                if(dfs(adj,x,vis,s) == true){
                    return true;
                }
                
            }else if(x != parent){
                return true;
            }
        }
        return false;
    }
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int v, vector<int> adj[]) {
        
        bool vis[v] = {false};
        
        for(int i=0;i<v;i++){
            
            if(!vis[i]){
                if(dfs(adj,i,vis,-1) == true){
                    return true;
                }
            }
        }
        return false;
    }

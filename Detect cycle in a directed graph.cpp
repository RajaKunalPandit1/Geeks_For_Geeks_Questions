Output Status :

Problem Solved Successfully
Test Cases Passed: 
410 /410
Total Points Scored: 
4 /4
Your Total Score: 
2639
Total Time Taken: 
0.76
Your Accuracy: 
100%
Attempts No.: 
1

    bool dfs(vector<int> adj[], int s, vector<bool> &recst,vector<bool> &vis){
            
        vis[s] = true;
        recst[s] = true;
        
        for(auto x : adj[s]){
            
            if(!vis[x] && dfs(adj,x,recst,vis) == true){
                return true;
            }else if(recst[x]){
                return true;
            }
        }
        recst[s] = false;
        return false;
    }
  
  
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        
        vector<bool> vis(V,false);
        vector<bool> recst(V,false);
        
        for(int i=0;i<V;i++){
            
            if(!vis[i]){
                
                if(dfs(adj,i,recst,vis) == true){
                    return true;
                }
            }
        }
        return false;
    }

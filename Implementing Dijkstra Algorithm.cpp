Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
131 /131
Your Total Score: 
2647
Total Time Taken: 
0.11
Correct Submission Count: 
2
Attempts No.: 
2

    vector <int> dijkstra(int v, vector<vector<int>> adj[], int s){
        
        vector<int> dist(v,INT_MAX);
        dist[s] = 0;
        
        vector<bool> final(v,false);
        
        for(int i=0;i<v-1;i++){
            
            int u = -1;
            
            for(int i=0;i<v;i++){
                
                if(!final[i] && (u == -1 || dist[u] > dist[i])){
                    
                    u = i;
                }
            }
            
            final[u] = true;
            
            for(auto it : adj[u]){
                
                int v = it[0];
                int w = it[1];
                
                if(final[v] == false && dist[v] > w + dist[u]){
                    dist[v] = w + dist[u];
                }
            }
            
        }
        return dist;
    }

Output Status : 

Suggest Feedback
Problem Solved Successfully
Test Cases Passed: 
122 /122
Total Points Scored: 
4 /4
Your Total Score: 
2647
Total Time Taken: 
1.87
Your Accuracy: 
100%
Attempts No.: 
1

	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int v, vector<vector<int>> adj[])
    {
        bool mst[v] = {false};
        int res = 0;
        
        int key[v];
        fill(key,key+v,INT_MAX);
        
        key[0] = 0;
        
        for(int cnt =0;cnt <v;cnt++){
            
            int u = -1;
            
            for(int i=0;i<v;i++){
                
                if(!mst[i] && (u == -1 || key[u] > key[i])){
                    u = i;
                }
            }
            
            mst[u] = true;
            res += key[u];

            for(auto v : adj[u]){
                
                if(!mst[v[0]] && v[1] < key[v[0]]){
                    key[v[0]] = v[1];
                }
            }
        }
        return res;
    }

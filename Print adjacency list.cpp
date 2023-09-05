Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1122 /1122
Total Points Scored: 
2 /2
Your Total Score: 
2824
Total Time Taken: 
0.12
Your Accuracy: 
100%
Attempts No.: 
1

    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        vector<int> adj[V];
        
        for(int i=0;i<edges.size();i++){
            int u=edges[i].first;
            int v=edges[i].second;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<vector<int>> adjList;
        
        for(int i=0;i<V;i++){
             vector<int>temp;
            for(int j=0;j<adj[i].size();j++){
                 temp.push_back(adj[i][j]);
            }
            sort(temp.begin(),temp.end());
            adjList.push_back(temp);
        }
        
        return adjList;
    }

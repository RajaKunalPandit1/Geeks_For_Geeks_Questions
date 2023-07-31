Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1123 /1123
Your Total Score: 
2727
Total Time Taken: 
0.04
Correct Submission Count: 
6
Attempts No.: 
6
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        
        vector<int> vis(v,0);
        
        vector<int> res;
        queue<int> q;
        
        q.push(0);
        vis[0] = 1;
        
        while(!q.empty()){
            
            int node = q.front();
            q.pop();
            
            res.push_back(node);
            
            for(auto it : adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return res;
    }

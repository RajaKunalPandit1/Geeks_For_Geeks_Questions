Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2727
Total Time Taken: 
0.05
Correct Submission Count: 
3
Attempts No.: 
3


    void dfs(int x, vector<int> adj[],vector<int>& ans,vector<bool>& vis){
        vis[x]=true;
        ans.push_back(x);
        for(auto it:adj[x]){
            if(!vis[it]){
                vis[it]=true;
                dfs(it,adj,ans,vis);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        vector<bool>vis(V,false);
        dfs(0,adj,ans,vis);
        return ans;
    }

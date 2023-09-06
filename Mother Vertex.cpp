Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1223 /1223
Total Points Scored: 
2 /2
Your Total Score: 
2826
Total Time Taken: 
0.36
Your Accuracy: 
100%
Attempts No.: 
1


	void dfs(int i,vector<int>&vis,stack<int>&s,vector<int>adj[]){
        vis[i]=1;
        for(auto nei:adj[i]){
            if(vis[nei]==0){
                dfs(nei,vis,s,adj);
            }
        }
        s.push(i);
    }
    int findMotherVertex(int V, vector<int>adj[])
    {
        // Code here
        stack<int>s;
        vector<int>vis(V);
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                dfs(i,vis,s,adj);
            }
        }
       int ans=s.top();
       vis.assign(V,0);
       dfs(ans,vis,s,adj);
       for(int i=0;i<V;i++){
           if(vis[i]==0){
               return -1;
           }
       }
       return ans;
	}

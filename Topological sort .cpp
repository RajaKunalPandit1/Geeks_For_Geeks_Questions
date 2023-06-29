Output Status : 

Suggest Feedback
Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2639
Total Time Taken: 
0.25
Correct Submission Count: 
2
Attempts No.: 
2

// USing BFS :: Time : O(V+E) :: Aux_Space : O(v)
  
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	   
	   vector<int> res;
	   vector<int> indeg(v,0);
	   
	   for(int i=0;i<v;i++){
	       for(auto x : adj[i]){
	           indeg[x]++;
	       }
	   }
	   
	   queue<int> q;
	   
	   for(int i=0;i<v;i++){
	       if(indeg[i] == 0){
	           q.push(i);
	       }
	   }
	   
	   while(!q.empty()){
	       
	       int u = q.front();
	       q.pop();
	       
	       res.push_back(u);
	       
	       for(auto x : adj[u]){
	           
	           indeg[x]--;
	           
	           if(indeg[x] == 0){
	               q.push(x);
	           }
	       }
	   }
	   
	   return res;
	}

// Using DFS :: Time : O(V+E) :: Aux_Space : O(V)

	void dfs(vector<int> adj[], int s,vector<bool> &vis,stack<int> &st){
	    
	    vis[s] = true;
	    
	    for(auto x : adj[s]){
	        
	        if(!vis[x]){
	            dfs(adj,x,vis,st);
	        }
	    }
        st.push(s);
	}
	
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    vector<int> res;
	    stack<int> st;
	    vector<bool> vis(v,false);
	    
	    for(int i=0;i<v;i++){
	        if(!vis[i]){
	            dfs(adj,i,vis,st);
	        }
	    }
	    
	    while(!st.empty()){
	        res.push_back(st.top());
	        st.pop();
	    }
	    return res;
	}

Output Status :

Problem Solved Successfully 
 Test Cases Passed:
825 / 825
Total Points Scored:
4/4
Total Time Taken:
0.47/1.82
Your Accuracy:
100%
Attempts No.:
1


class Solution {
public:

    bool dfs (int vertex, vector<int> adj[], vector<int>&color){
        
        vector<int> neighbours = adj[vertex];
        
        for(int neighbour : neighbours){
            if(color[neighbour] == color[vertex]){
                return false;
            }else if(color[neighbour] == 0){
                color[neighbour] = (color[vertex] == 1)?2:1;
                if(!dfs(neighbour,adj,color)){
                    return false;
                }
            }
        }
        return true;
    }

	bool isBipartite(int V, vector<int>adj[]){
	    
	    vector<int> color(V,0);
	    
	    for(int i=0;i<V;i++){
	        
	        if(color[i] == 0){
	            color[i] = 1;
	            if(!dfs(i,adj,color)) return false;
	       }
	        
	    }
	    return true;
	}
};

// Another Solution : 

class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
		vector<int>color(V, -1);
		queue<int>q;
		bool is_Bipratite = true;
		for(int i = 0; i < V; i++){
			if(color[i] == -1){
				q.push(i);
				color[i] = 0;
				while(!q.empty()){
					int u = q.front();
					q.pop();
					for(auto v: adj[u]){
						if(color[v] == -1){
							color[v] = color[u] ^ 1;
							q.push(v);
						}
						else is_Bipratite = is_Bipratite & (color[u] != color[v]);
					}

				}
			}
		}
		return is_Bipratite;
	}

};

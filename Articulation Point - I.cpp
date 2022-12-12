Output Status:

Problem Solved Successfully
Test Cases Passed: 
164 /164
Total Points Scored: 
8 /8
Your Total Score: 
1709
Total Time Taken: 
0.08
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    void DFS(vector<int> adj[],vector<int> &Time,vector<int> &low,vector<int> &visited,int &timer,int parent,int cnode,set<int> &ans){ //cnode denotes the currnode
    
    Time[cnode]=low[cnode]=timer++;
    visited[cnode]=1;
    
    int child = 0;
    
    for(int nxt:adj[cnode]){
        if(nxt==parent) continue;
        
        if(visited[nxt]==0){
            DFS(adj,Time,low,visited,timer,cnode,nxt,ans);
            low[cnode]=min(low[cnode],low[nxt]);
            
            if(low[nxt]>=Time[cnode] && parent!=-1){
                ans.insert(cnode);
            }
            child++;
        }
        else{
            low[cnode]=min(low[cnode],low[nxt]);
        }
    }
    
    if(parent==-1 && child>1){
        ans.insert(cnode);
    }
}

vector<int> articulationPoints(int V, vector<int>adj[]) {
    // approach same as the find bridge in the graph
    vector<int> Time(V,0),low(V,0),visited(V,0);
    int timer = 0;
    set<int> ans;
    for(int i=0;i<V;i++){
        if(visited[i]==0) DFS(adj,Time,low,visited,timer,-1,i,ans);
    }
    vector<int> final(ans.begin(),ans.end());
    if(final.size()==0) return {-1};
    return final;
}
};

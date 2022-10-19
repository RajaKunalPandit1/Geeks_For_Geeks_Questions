Output Status : 

Problem Solved Successfully
Test Cases Passed: 
52 /52
Total Points Scored: 
4 /4
Your Total Score: 
1486
Total Time Taken: 
0.02
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
{
    public:
    bool dfs(int node, int N, vector<vector<int>>& adj, unordered_set<int> &st){
        st.insert(node);
        if(st.size() == N) return true;
        for(int child : adj[node]){
            if(st.find(child) == st.end() && dfs(child, N, adj, st)){
                    return true;
            }
        }
        st.erase(node);
        return false;
    }
    
    bool check(int N,int M,vector<vector<int>> Edges)
    {
        vector<vector<int>> adj(N + 1);
        for(vector<int> &e : Edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        unordered_set<int> st;
        for(int i = 1; i <= N; i++){
            if(dfs(i, N, adj, st)){
                return true;
            }
        }      
        return false;
    }
};

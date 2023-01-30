Output Status : 

Problem Solved Successfully
Test Cases Passed: 
113 /113
Total Points Scored: 
8 /8
Your Total Score: 
1883
Total Time Taken: 
0.13
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
    int ans;
  public:
    bool isLeaf(int node, int par, vector<int> adj[])
    {
        int cnt = 0;
        for (auto i : adj[node])
            if (i != par)
                cnt++;
        return cnt == 0;
    }
    bool dfs(int node, int par, vector<int> adj[])
    {
        if (isLeaf(node, par, adj))
            return true;

        bool flag = false;
        for (auto i : adj[node])
            if (i != par)
                flag |= dfs(i, node, adj);

        if (flag)
            ans++;

        return !flag;
    }
    int countVertex(int N, vector<vector<int>> edges)
    {
        ans = 0;
        vector<int> adj[N + 1];
        for (auto i : edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int> vis(N + 1);
        dfs(1, -1, adj);
        return ans;
    }
};

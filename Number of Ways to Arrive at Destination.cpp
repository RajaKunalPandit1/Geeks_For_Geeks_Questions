Output Status : 

Problem Solved Successfully
Test Cases Passed: 
44 /44
Total Points Scored: 
4 /4
Your Total Score: 
1380
Total Time Taken: 
0.91
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
     int shortest;
    int N, ans;
    unordered_map<int, unordered_map<int, int>> time;
    vector<vector<int>> dp;

public:
    int dfs(int node, int dist, vector<int> &vis, vector<vector<int>> &adj)
    {
        if (node == N - 1)
            return dist == shortest;

        if (dp[node][dist] != -1)
            return dp[node][dist];

        vis[node] = 1;
        int cnt = 0;
        for (auto i : adj[node])
            if (!vis[i])
                cnt += dfs(i, dist + time[node][i], vis, adj);
        
        vis[node] = 0;
        return dp[node][dist] = cnt;
    }
    int countPaths(int n, vector<vector<int>> &roads)
    {
        // code here
        N = n;
        ans = 0;
        dp = vector<vector<int>>(205, vector<int>(1e5, -1));

        vector<vector<int>> adj(n);

        for (auto i : roads)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
            time[i[0]][i[1]] = i[2];
            time[i[1]][i[0]] = i[2];
        }

        vector<int> dist(n, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        q.push({0, 0});

        while (!q.empty())
        {
            auto p = q.top();
            q.pop();

            int dist_till = p.first;
            int u = p.second;
            for (auto v : adj[u])
            {
                if (dist_till + time[u][v] < dist[v])
                {
                    dist[v] = dist_till + time[u][v];
                    q.push({dist[v], v});
                }
            }
        }
        shortest = dist[n - 1];

        vector<int> vis(n);
        return dfs(0, 0, vis, adj);
    }
};

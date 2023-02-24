Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1113 /1113
Total Points Scored: 
8 /8
Your Total Score: 
1981
Total Time Taken: 
1.62
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    vector<int>dk(unordered_map<int,vector<pair<int,int>>>&adj,int n,int s){

      vector<int>dis(n+1,1e9);

      dis[s]=0;

      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

      pq.push({0,s});

      while(pq.size()){

          auto d=pq.top();

          pq.pop();

          int x=d.second;

          for(auto c:adj[x]){

              if(dis[c.first]>dis[x]+c.second){

                  dis[c.first]=dis[x]+c.second;

                  pq.push({dis[c.first],c.first});

              }

          }

      }

      return dis;

  }

    int shortestPath(int n, int m, int a, int b, vector<vector<int>> &edges) {

        // code here

        unordered_map<int,vector<pair<int,int>>>adj;

        for(auto x:edges){

            int u=x[0];

            int v=x[1];

            int w=x[2];

            

            adj[u].push_back({v,w});

            adj[v].push_back({u,w});

            

        }

        vector<int>dis1=dk(adj,n,a);

        vector<int>dis2=dk(adj,n,b);

        int ans=min(dis1[b],dis2[a]);

        for(int i=0;i<m;i++){

            int u=edges[i][0];

            int v=edges[i][1];

            int c=edges[i][3];

            ans=min({ans,dis1[u]+c+dis2[v],dis1[v]+c+dis2[u]});

        }

        if(ans>=1e9)return -1;

        return ans;
    }
};

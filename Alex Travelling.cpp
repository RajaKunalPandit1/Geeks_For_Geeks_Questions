Output Status : 

Problem Solved Successfully
Test Cases Passed: 
168 /168
Total Points Scored: 
4 /4
Your Total Score: 
1737
Total Time Taken: 
0.54
Your Accuracy: 
100%
Attempts No.: 
1


class Solution {
  public:
    int minimumCost(vector<vector<int>>& flights, int n, int k) {
        map<int,vector<pair<int,int>>>mp;

        for(int i =0;i<flights.size();i++){

            int u = flights[i][0];

            int v = flights[i][1];

            int wt = flights[i][2];

            mp[u].push_back({v,wt});

        }

        vector<int>dist(n+1,INT_MAX);

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;

        dist[k]=0;

        q.push({dist[k],k});

        int ans = -1;

        

        while(!q.empty()){

            auto it =  q.top();

            q.pop();

            int node = it.second;

            int cost = it.first;

            for(auto i:mp[node]){

                if(dist[i.first]>cost+i.second){

                    dist[i.first]=cost+i.second;

                    q.push({dist[i.first],i.first});

                }

            }

        }

        

        for(int i=1;i<dist.size();i++){

            if(dist[i]==INT_MAX){

                return -1;

            }else{

                ans=max(ans,dist[i]);

            }

        }

        return ans;
    }
};

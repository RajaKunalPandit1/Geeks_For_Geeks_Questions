Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1119 /1119
Total Points Scored: 
8 /8
Your Total Score: 
2007
Total Time Taken: 
0.4
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    int minCost(vector<vector<int>> &costs) {
        // write your code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<costs[0].size();i++){
            pq.push({costs[0][i],i});
        }
        
        for(int i=1;i<costs.size();i++){
            priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> temp;
            for(int j=0;j<costs[0].size();j++){
                if(pq.top().second==j){
                    auto a=pq.top();
                    pq.pop();
                    if(pq.empty()) return -1;
                    temp.push({costs[i][j]+pq.top().first,j});
                    pq.push(a);
                }else{
                    temp.push({costs[i][j]+pq.top().first,j});
                }
            }
            
            pq=temp;
            }
        return pq.top().first;
    }
};

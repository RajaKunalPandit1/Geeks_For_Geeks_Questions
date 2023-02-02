Output Status : 

Problem Solved Successfully
Test Cases Passed: 
125 /125
Total Points Scored: 
8 /8
Your Total Score: 
1899
Total Time Taken: 
0.18
Your Accuracy: 
100%
Attempts No.: 
1

class Solution
{
  public:
  void dfs(int node,vector<bool>&visited,vector<bool>&dfsvisited,vector<int>& edges,vector<int>&prevSum,int currSum,int &ans){

         if(node==-1) return;

            if(!visited[node]){

                visited[node]=true;

                dfsvisited[node]=true;

                prevSum[node]=currSum;

               dfs(edges[node],visited,dfsvisited,edges,prevSum,currSum+edges[node],ans);

            }else if(visited[node]==true and dfsvisited[node]==true)
            {//calculating ans bcoz we found a cylce here
                ans=max(ans,currSum-prevSum[node]);
            }

        dfsvisited[node]=false;//backtrack
    }
  long long largestSumCycle(int n, vector<int> edges){
      
        vector<int>prevSum(n,0);//to contain curr distance form the source node

        vector<bool>visited(n,false);

        vector<bool>dfsvisited(n,false);

        int ans=-1;

        for(int i=0;i<n;i++){

            if(!visited[i]){

                dfs(i,visited,dfsvisited,edges,prevSum,i,ans);   
            }
        }

      return ans;
  }

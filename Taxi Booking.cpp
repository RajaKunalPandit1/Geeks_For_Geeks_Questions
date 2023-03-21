Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
2 /2
Your Total Score: 
2087
Total Time Taken: 
0.06
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
         int ans= abs( pos[0] - cur) *time[0];
     
     
         for(int i=1; i<pos.size(); i++){
             int result= abs(pos[i] - cur) *time[i];
             
             ans= min(ans,result);
         }
    return ans;
    }
};

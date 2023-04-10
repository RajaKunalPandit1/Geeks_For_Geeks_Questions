Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2159
Total Time Taken: 
2.81
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    int maxIntersections(vector<vector<int>> lines, int n) {
        
        map<int,int> mp;
        
        for(auto i: lines){
            mp[i[0]]++;
            mp[i[1] + 1]--;
        }
        
        int pref = 0,res =0;
        
        for(auto i : mp){
            pref += i.second;
            res = max(res,pref);
        }
        return res;
    }
};

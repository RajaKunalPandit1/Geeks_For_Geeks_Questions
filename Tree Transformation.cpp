Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1110
Total Points Scored: 
4 /4
Your Total Score: 
2333
Total Time Taken: 
0.23
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
    public:
    int solve(int N, vector<int> p){
        
        unordered_map<int , int> mp;
        
        for(int i = 1; i < N ; i++){
            mp[p[i]]++;
        }
        
        int ans ;
        
        if(mp[0]==1)ans = mp.size()-2;
        else ans = mp.size()-1;
        
        if(ans<0)ans = 0;
        return ans;
    }
};

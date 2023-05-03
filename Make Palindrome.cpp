Output Status : 

Suggest Feedback

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2247
Total Time Taken: 
0.12
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        map<string, int> mp;
        
        for(auto it : arr) mp[it]++;
        
        for(auto it : arr){
            reverse(it.begin(), it.end());
            mp[it]++;
        }
        
        for(auto it : mp){
            if(it.second % 2) return false;
        }
        return true;
    }
};

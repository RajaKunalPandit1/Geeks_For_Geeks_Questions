Output Status : 

Problem Solved Successfully
Test Cases Passed: 
165 /165
Total Points Scored: 
2 /2
Your Total Score: 
1701
Total Time Taken: 
0.12
Your Accuracy: 
100%
Attempts No.: 
1


class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
         int n = nums.size();
        map<int, int> mp;
        for(int i = 0; i < n; i++) mp[nums[i]%k]++;
        
        for(int i = 0; i <= k/2; i++)
        {
            if(i == 0 || i == k-i) {
                if(mp[i]%2 != 0) return false;
                continue;
            }
            if(mp[i] != mp[k-i]) return false;
        }
        return true;
    }
};

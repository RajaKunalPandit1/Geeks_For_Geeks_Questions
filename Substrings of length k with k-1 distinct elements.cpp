Output Status : 

Problem Solved Successfully
Test Cases Passed: 
222 /222
Total Points Scored: 
4 /4
Your Total Score: 
1450
Total Time Taken: 
0.15
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    int countOfSubstrings(string s, int k) {
        
        int n = s.length();
        
        
        unordered_map<char,int> mp;
        
        int i=0,j=0,count = 0;
        
        while(j < s.size()){
            mp[s[j]]++;
            
            if(j-i+1 == k){
                
                if(mp.size() == k-1){
                    count++;
                }
                mp[s[i]]--;
                
                if(mp[s[i]] == 0){
                    mp.erase(s[i]);
                }
                i++;
            }
            j++;
        }
        return count;
    }
};

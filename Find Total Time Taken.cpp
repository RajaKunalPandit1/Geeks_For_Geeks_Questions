Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1065 /1065
Total Points Scored: 
2 /2
Your Total Score: 
2179
Total Time Taken: 
0.17
Your Accuracy: 
33%
Attempts No.: 
3

class Solution {
  public:
    int totalTime(int n, vector<int> &arr, vector<int> &time) {
        
        int count = -1;
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;++i){
            
           if(mp.find(arr[i]) == mp.end()){
               mp[arr[i]] = count;
           }else{
               count = max(count, mp[arr[i]] + time[arr[i]-1]);
               mp[arr[i]] = count;
           }
           count++;
        }
        return count ;        
        
    }
};

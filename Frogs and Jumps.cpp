Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1065 /1065
Total Points Scored: 
2 /2
Your Total Score: 
2105
Total Time Taken: 
0.34
Your Accuracy: 
100%
Attempts No.: 
1


class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        unordered_map<int, int> mp;
        for(int i=0; i<N; i++){
            int a = frogs[i];
            int b = a;
            if(!mp[a]){
                while(a <= leaves){
                    mp[a]++;
                    a+=b;
                }
            }
            
        }
        
        int count=0;
        for(int i=1;i<=leaves;i++){
            if(mp[i]==0) count++;
        }
        return count++;
    }
};

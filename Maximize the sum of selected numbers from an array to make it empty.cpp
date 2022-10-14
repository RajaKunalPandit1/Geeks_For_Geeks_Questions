Output Status : 

Problem Solved Successfully
Test Cases Passed: 
200 /200
Total Points Scored: 
4 /4
Your Total Score: 
1470
Total Time Taken: 
0.97
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
    public:
    int maximizeSum(int a[], int n) 
    {
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        
        int s = 0;
        int cs;
        
        for(int i=n-1;i>-1;i--){
            
            cs = a[i];
            
            if(mp[cs] > 0){
                s += cs;
                mp[cs]--;
                if(mp[cs-1] > 0){
                    mp[cs-1]--;
                }
            } 
        }
        return s;
    }

};

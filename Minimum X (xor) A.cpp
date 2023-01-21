Output Status:

Problem Solved Successfully
Test Cases Passed: 
262 /262
Total Points Scored: 
4 /4
Your Total Score: 
1847
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  void helper(int &ans,int cnt,int cnt2,bool flag,int a){
        int idx = 0;
        while(cnt!=cnt2){
            if(!((a&1) ^ flag)){
                ans = ans +(flag?-1:1)*(1<<idx);
                cnt--;
            }
            a = a/2;
            idx++;
        }
    }
    
  public:
    int minVal(int a, int b) {
        int cnt1 = __builtin_popcount(a);
        int cnt2 = __builtin_popcount(b);
        int ans = a;
        int idx = 0;
        helper(ans,max(cnt1,cnt2),min(cnt2,cnt1),cnt1>cnt2,a);
        return ans;
    }
};

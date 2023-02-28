Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1117 /1117
Total Points Scored: 
4 /4
Your Total Score: 
1995
Total Time Taken: 
0.17
Your Accuracy: 
100%
Attempts No.: 
1


class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &a){
        vector<int> ans(n,0);
        for(int i=1;i<n;i++) ans[i]=ans[i-1]+a[i]-a[i/2];
        return ans;
    }
};

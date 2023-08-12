Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2762
Total Time Taken: 
0.07
Your Accuracy: 
100%
Attempts No.: 
1

int longestSubsequence(int n, int a[])
    {
       vector<int>ans;
             ans.push_back(a[0]);
             int length=1;
             for(int i=1;i<n;i++){
                 if(a[i]>ans.back()){
                     ans.push_back(a[i]);
                     length++;
                 }
                 else{
                     int index = lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
                     ans[index]=a[i];
                 }
             }
             return length;
    }

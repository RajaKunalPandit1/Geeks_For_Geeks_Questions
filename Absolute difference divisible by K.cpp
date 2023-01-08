Output Status : 

Problem Solved Successfully
Test Cases Passed: 
120 /120
Total Points Scored: 
2 /2
Your Total Score: 
1793
Total Time Taken: 
0.37
Your Accuracy: 
100%
Attempts No.: 
1


class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        int a[n];
        map<int,int> mp;
        for(int i=0;i<n;i++){
            a[i] = (arr[i]+k)%k;
            mp[a[i]]++;
        }
        long long int ans = 0;
        for(auto i = mp.begin();i!=mp.end();i++){
            int no = i->second;
            ans = ans + (no*(no-1)/2);
        }
        return ans;
    }
};

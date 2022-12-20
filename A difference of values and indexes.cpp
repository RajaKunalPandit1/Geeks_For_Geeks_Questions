Output Status : 

Problem Solved Successfully
Test Cases Passed: 
160 /160
Total Points Scored: 
4 /4
Your Total Score: 
1741
Total Time Taken: 
0.26
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {

  public:
    int maxDistance(int arr[], int n) 
    { 
           int a = INT_MIN, b = INT_MAX, c = INT_MIN, d = INT_MAX;

        for(int i=0; i<n; i++){
            a = max(a, arr[i]-i);
            b = min(b, arr[i]-i);
            c = max(c, arr[i]+i);
            d = min(d, arr[i]+i);
        }
        return max(a-b, c-d);
    } 
};

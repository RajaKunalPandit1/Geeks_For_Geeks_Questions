Output Status : 

Problem Solved Successfully
Test Cases Passed: 
160 /160
Total Points Scored: 
4 /4
Your Total Score: 
1747
Total Time Taken: 
0.58
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
          long long int result = 0;
        map<long long int, int> freq;
        long long int sum = 0;
        freq[0]++;
        for(int i = 1; i <= n; i++){
            sum += arr[i-1];
            freq[sum]++;
            result += freq[sum] - 1;
        }
        return result;
    }
};

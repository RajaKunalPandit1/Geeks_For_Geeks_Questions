Output Status : 

Problem Solved Successfully
Test Cases Passed: 
165 /165
Total Points Scored: 
2 /2
Your Total Score: 
2406
Total Time Taken: 
0.43
Your Accuracy: 
10%
Attempts No.: 
10


// Naive Solution :: Time : O(N*2) :: Aux_Space : O(1)

class Solution {
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        
        for(int i=0;i<n;i++){
            
            long long sum = 0;
            
            for(int j=i;j<n;j++){
                sum += arr[j];
                
                if(sum == s){
                    return {i+1,j+1};
                }
            }
        }
        return {-1};
    }
};

// Efficient Solution :: Time : O(N) :: Aux_Space : O(1)

class Solution {
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        long long sum = 0;
        
        int j=0;
        
        for(int i=0;i<n;i++){
            
            sum += arr[i];
            
            while(sum > s && j <= i){
                sum -= arr[j++];
            }
            if(sum == s && j <= i){
                return {j+1,i+1};
            }
        }
        return {-1};
    }
 };

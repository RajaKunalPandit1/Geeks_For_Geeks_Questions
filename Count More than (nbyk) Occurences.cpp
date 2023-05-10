Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
155 /155
Your Total Score: 
2281
Total Time Taken: 
0.01
Correct Submission Count: 
2
Attempts No.: 
2

// Naive Solution :: Time : O(NlogN) :: Aux_Space : O(1)

class Solution {
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        
        sort(arr,arr+n);
        
        int res = 0;
        
        int i=0;
        
        while(i<n){
            
            int cnt = 1;
            
            while(i<n && arr[i] == arr[i+1]){
                cnt++;
                i++;
            }
            
            if(cnt > (n/k)){
                res++;
                cnt = 1;
            }
            i++;
        }
        return res;
    }
};

// Efficient Solution :: Time : O(N) :: Aux_Space : O(N)

class Solution {
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        
        int res = 0;
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        for(auto x: mp){
            if(x.second > (n/k)){
                res++;
            }
        }
        return res;
    }
};

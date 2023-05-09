Output Status : 

Problem Solved Successfully
Test Cases Passed: 
140 /140
Total Points Scored: 
2 /2
Your Total Score: 
2273
Total Time Taken: 
0.36
Your Accuracy: 
20%
Attempts No.: 
5

// Naive Solution :: Time : O(N^2) :: Aux_Space : O(1)

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        
        int res = 0;
        
        for(int i=0;i<N;i++){
            
        int cnt1 = 0, cnt0 = 0,j;
        
            for(j=i;j<N;j++){
                
                if(arr[j] == 0){
                    cnt0++;
                }else{
                    cnt1++;
                }
                if(cnt0 == cnt1){
                  res = max(res,cnt0+cnt1);
                }
            }
            
        }
        return res;
    }
};

// Efficient Solution :: Time : O(N) :: Aux_Space : O(N)

class Solution{
  public:
    int maxLen(int arr[], int n)
    {
        
        int res = 0;
        
        for(int i=0;i<n;i++){
            if(arr[i] == 0){
                arr[i] = -1;
            }
        }
        
        unordered_map<int,int> mp;
        
        int pre_sum = 0;
        
        for(int i=0;i<n;i++){
            
            pre_sum += arr[i];
            
            if(pre_sum == 0){
                res = i+1;
            }else if(mp.find(pre_sum) == mp.end()){
                mp.insert({pre_sum,i});
            }
            if(mp.find(pre_sum) != mp.end()){
                res = max(res,i-mp[pre_sum]);
            }
        }
        return res;
    }
};

Output Status : 

Problem Solved Successfully
Test Cases Passed: 
330 /330
Total Points Scored: 
4 /4
Your Total Score: 
2277
Total Time Taken: 
0.78
Your Accuracy: 
50%
Attempts No.: 
2

// Naive Solution :: Time : O(N^2) :: Aux_Space : O(1)

class Solution {
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n) {
            
            int res = 0;
            
            for(int i=0;i<n;i++){
                
                int pre_sum = 0;
                int cnt1=0,cnt2 =0;
                
                for(int j=i;j<n;j++){
                    
                    cnt1 += arr1[j];
                    cnt2 += arr2[j];
                    
                    if(cnt1 == cnt2){
                        res = max(res,j-i+1);
                    }
                }
            }
        return res;
    }
};

// Efficient Solution :: Time : O(N) :: Aux_Space : O(N)

class Solution {
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n) {
            
            int temp[n];
            
            for(int i=0;i<n;i++){
                temp[i] = arr1[i] - arr2[i];
            }
            
            int res = 0;
            
            unordered_map<int,int> mp;
            
            int pre_sum = 0;
            
            for(int i=0;i<n;i++){
                
                pre_sum += temp[i];
                
                if(pre_sum == 0){
                    res = i+1;
                }
                if(mp.find(pre_sum) == mp.end()){
                    mp.insert({pre_sum,i});
                }
                
                if(mp.find(pre_sum) != mp.end()){
                    res = max(res,i-mp[pre_sum]);
                }
            }
            return res;
    }
};

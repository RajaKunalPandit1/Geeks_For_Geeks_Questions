Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
262 /262
Your Total Score: 
1273
Total Time Taken: 
0.36
Correct Submission Count: 
3
Attempts No.: 
3
  
// Time : O(N) :: Aux_Space : O(N)
  
  class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        for(auto x: mp){
            if(x.second %2 != 0){
                return x.first;
            }
        }
        return -1;
    }
};

// Time : O(N) :: Aux_Space : O(1)

class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        
        int res = arr[0];
        
        for(int i=1;i<n;i++){
            
            res = res^arr[i];
        }
        
        return res;
    }

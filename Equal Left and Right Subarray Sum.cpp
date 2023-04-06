Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2141
Total Time Taken: 
0.15
Your Accuracy: 
50%
Attempts No.: 
2

// Naive Solution :: Time : O(N^2) :: Aux_Space : O(1)

class Solution {
  public:
    int equalSum(int n, vector<int> &arr) {

        for(int i=0;i<n;i++){
            
            int low = i-1;
            int high = i+1;
            
            int curr1 = 0,curr2 = 0;
            
            while(low >=0){
                curr1 += arr[low];
                low--;
            }
            
            while(high < n){
                curr2 += arr[high];
                high++;
            }
            
            if(curr1 == curr2){
                return i+1;
            }
        }
        return -1;
    }
};

// Efficient Solution :: Time : O(N) :: Aux_Space : O(1)

class Solution {
    public:
    int equalSum(int n, vector<int> &arr) {
        
        int sum = 0;
        
        for(int i=0;i<n;i++){
            sum += arr[i];
        }
        
        int nextSum = sum;
        int prevSum = 0;
        
        for(int i=0;i<n;i++){
            
            nextSum -= arr[i];
            
            if(prevSum == nextSum ){
                return i+1;
            }else{
                prevSum += arr[i];
            }
        }
        return -1;
    }
};

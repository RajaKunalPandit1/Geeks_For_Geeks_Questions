Output Status : 

Problem Solved Successfully
Test Cases Passed: 
305 /305
Total Points Scored: 
1 /1
Your Total Score: 
2407
Total Time Taken: 
1.5
Your Accuracy: 
100%
Attempts No.: 

class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n) {
        
        for(int i=0;i<n;i++){
            if(i%2 == 0 && arr[i] > arr[i+1]){
                swap(arr[i],arr[i+1]);
            }else if(i%2 != 0 && arr[i] < arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        
    }
};

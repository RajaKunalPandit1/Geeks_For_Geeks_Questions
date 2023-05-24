Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
2 /2
Your Total Score: 
2339
Total Time Taken: 
0.07
Your Accuracy: 
33%
Attempts No.: 
3

class Solution {

  public:
    int getMaximum(int n, vector<int> &arr) {
       
       long sum =0 ;
       
       for(int i=0;i<n;i++){
           sum += arr[i];
       }
       
       for(int i=n;i>=1;i--){
           if(sum % i == 0){
               return i;
           }
       }
       return -1;
    }
};

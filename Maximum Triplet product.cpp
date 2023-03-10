Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1107 /1107
Total Points Scored: 
4 /4
Your Total Score: 
2043
Total Time Taken: 
0.12
Your Accuracy: 
100%
Attempts No.: 
1
  
  
class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n)
    {
    	sort(arr,arr+n);
        long long max1 = arr[n-1];
        long long max2 = arr[n-2];
        long long max3 = arr[n-3];
        long long min1 = arr[0];
        long long min2 = arr[1];

     return max((max1*max2*max3),(min1*min2*max1));
    }
  };

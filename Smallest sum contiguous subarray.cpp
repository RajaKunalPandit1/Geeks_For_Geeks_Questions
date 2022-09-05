Output Status : 

Problem Solved Successfully
Test Cases Passed: 
216 /216
Total Points Scored: 
4 /4
Your Total Score: 
1348
Total Time Taken: 
0.52
Your Accuracy: 
50%
Attempts No.: 
2



class Solution{
  public:
  int smallestSumSubarray(vector<int>& a){
      
      int n = a.size();
      int res = a[0],var = a[0];
      
      for(int i=1;i<n;i++){
          
          var = min(a[i],var+a[i]);
          res = min(res,var);
      }
      return res;
  }
};

// Another Solution 

class Solution{
  public:
  int smallestSumSubarray(vector<int>& arr){
    // to store the minimum value that is ending
    // up to the current index
    int n = arr.size();
    int min_ending_here = INT_MAX;
     
    // to store the minimum value encountered so far
    int min_so_far = INT_MAX;
     
    // traverse the array elements
    for (int i=0; i<n; i++)
    {
        // if min_ending_here > 0, then it could not possibly
        // contribute to the minimum sum further
        if (min_ending_here > 0)
            min_ending_here = arr[i];
         
        // else add the value arr[i] to min_ending_here   
        else
            min_ending_here += arr[i];
         
        // update min_so_far
        min_so_far = min(min_so_far, min_ending_here);           
    }
     
    // required smallest sum contiguous subarray value
    return min_so_far;
  }
};

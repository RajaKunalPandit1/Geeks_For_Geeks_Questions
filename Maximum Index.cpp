Output Status:

Problem Solved Successfully 
Total Points Scored:
4/4
Total Time Taken:
0.3/1.5
Your Accuracy:
11%
Attempts No.:
9
  
  
  class Solution
  {
      public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
       int low=0,high =n-1;
       
       int res = INT_MIN,diff;
       
       while(low<=high){
           if(arr[high]>=arr[low]){
               diff = high-low;
               res = max(res,diff);
               low++;
               high = n-1;
           }else{
               high--;
           }
       }
       return res;
       
    }
};


// Another Solution 

class Solution{
    public:
        
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        if(n==1){
            return 0;
        }
        int maxDiff; 
        int i, j; 
        
        int *LMin = new int[n];
        int *RMax = new int[n];
      
        //Constructing LMin[] such that LMin[i] stores the minimum value 
        //from (arr[0], arr[1], ... arr[i]).
        LMin[0] = arr[0]; 
        for (i = 1; i < n; ++i) 
            LMin[i] = min(arr[i], LMin[i-1]); 
      
        //Constructing RMax[] such that RMax[j] stores the maximum value 
        //from (arr[j], arr[j+1], ..arr[n-1]).
        RMax[n-1] = arr[n-1]; 
        for (j = n-2; j >= 0; --j) 
            RMax[j] = max(arr[j], RMax[j+1]); 
         
        i = 0, j = 0, maxDiff = -1; 
        //Traversing both arrays from left to right to find optimum j-i.
        //This process is similar to merge() of MergeSort.
        while (j < n && i < n) 
        { 
            if (LMin[i] <= RMax[j]) 
            { 
                //Updating the maximum difference.
                maxDiff = max(maxDiff, j-i); 
                j = j + 1; 
            } 
            else
                i = i+1; 
        } 
        //returning the maximum difference.
        return maxDiff; 
    }
};

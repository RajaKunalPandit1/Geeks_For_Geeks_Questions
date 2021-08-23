Output Status:
Problem Solved Successfully 
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Total Time Taken:
0.1/1.1
Correct Submission Count:
2
Attempts No.:
4
  
  
  class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int ternarySearch(int arr[], int n, int k) 
    { 
       
       int low=0,high = n-1;
       
       while(low<=high){
           int mid1 = low+(high-low)/3;
           int mid2 = high-(high-low)/3;
           
           if(arr[mid1] == k){
               return 1;
           }
           
           if(arr[mid2] == k){
               return 1;
           }
           if(arr[mid1]>k){
               high = mid1-1;
           }else if(arr[mid2]<k){
               low = mid2+1;
           }else{
               low= mid1+1;
               high = mid2-1;
           }
       }
       return -1;
    }
};


// Another Solution 


class Solution{
    public:
    int ternarySearch(int arr[], int N, int K) 
    { 
    
        int l = 0, r = N-1;
        while (r >= l) {
     
            // Find the mid1 and mid2
            int mid1 = l + (r - l) / 3;
            int mid2 = r - (r - l) / 3;
     
            // Check if key is present at any mid
            if (arr[mid1] == K) {
                return 1;
            }
            if (arr[mid2] == K) {
                return 1;
            }
     
            // Since key is not present at mid,
            // check in which region it is present
            // then repeat the Search operation
            // in that region
     
            if (K < arr[mid1]) {
     
                // The key lies in between l and mid1
                r = mid1 - 1;
            }
            else if (K > arr[mid2]) {
     
                // The key lies in between mid2 and r
                l = mid2 + 1;
            }
            else {
     
                // The key lies in between mid1 and mid2
                l = mid1 + 1;
                r = mid2 - 1;
            }
        }
     
        // Key not found
        return -1;
    } 
};



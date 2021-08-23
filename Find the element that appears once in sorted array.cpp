Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.4/1.4
Your Accuracy:
25%
Attempts No.:
4
  
  Naive Solution: Time: O(N) :: Aux_Space O(1)
    
  class Solution 
  {
  public:
    int findOnce(int arr[], int n)
    {
        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(m[arr[i]] == 1){
                return arr[i];
            }
        }
        
    }
};

// Efficient Solution: Time: O(logn) :: Aux_Space: O(1)

class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        int low = 0, high = n - 1;
        while (low < high) 
        {
            // Find the middle point
            int mid = (low + high) / 2;
        
            // If mid is even and element next to mid is
            // same as mid, then output element lies on
            // right side, else on left side
            if (mid%2 == 0)
            {
                if (arr[mid] == arr[mid+1])
                    low = mid + 2;
                else
                    high = mid;
            }
            else  // If mid is odd
            {
                if (arr[mid] == arr[mid-1])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return arr[low];
    }

};


OR



 int findOnce(int arr[], int n)
    {
        int low = 0;
        int high = n-1;
        while(low<=high){
            // int mid = low + (high-low)/2; or
            int mid = (low+high) >>1; //divide by 2
            
            //even index - left half
             if(arr[mid]==arr[mid^1]) //prev even and next odd
             low = mid+1;
             
             else
             high = mid-1;
            
        }
            return arr[low];
    }

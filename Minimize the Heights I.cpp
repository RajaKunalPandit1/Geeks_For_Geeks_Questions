Output Status:
Problem Solved Successfully 
Total Points Scored:
4/4
Total Time Taken:
0.4/2.4
Your Accuracy:
100%
Attempts No.:
1
  
  class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        
        sort(arr,arr+n);
        
        int res = arr[n-1] - arr[0];
        
        int small = arr[0]+k;
        int large = arr[n-1]-k;
        
        int mi,ma;
        
        for(int i=0;i<n-1;i++){
            mi = min(small,arr[i+1]-k);
            ma = max(large,arr[i]+k);
            
            res = min(res,(ma-mi));
        }
        return res;
        
    }
};



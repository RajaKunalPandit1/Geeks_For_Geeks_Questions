Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.4/1.5
Your Accuracy:
16%
Attempts No.:
6
  
  
  class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        
        int sum=0;
        
       int mul = n*(n+1)/2;
        
        for(int i=0;i<n-1;i++){
            sum+= array[i];
        }
        
        return (mul-sum);
        
    }
};

// Another Solution 


class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int total = (n + 1) * (n) / 2;
        for (int i = 0; i < n-1; i++)
            total -= array[i];
        return total;
    }
};


Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.5/2.1
Your Accuracy:
100%
Attempts No.:
1
  
  
  class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long n)
    {

        long long res =0;
        for(int i=1;i<n;i++){
            res = max(res,(arr[i]+arr[i-1]));
        }
        return res;
    }
};


// Another Solution Using Stack


class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
        
        stack<long long int> s;
        long long int ans = INT_MIN;
        
        for(int i=1;i<N;i++){
            s.push(arr[i]+arr[i-1]);
        }
        while(!s.empty()){
            ans = max(ans,s.top());
            s.pop();
        }
        return ans;
        
    }
};



Output Status : 

Problem Solved Successfully
Test Cases Passed: 
281 /281
Total Points Scored: 
2 /2
Your Total Score: 
1412
Total Time Taken: 
5.43
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        
        
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        
        long long res = 0;
        
        while(pq.size() > 1){
            
            long long one = pq.top();
            pq.pop();
            long long two = pq.top();
            pq.pop();
            long long ans = one + two;
            res += ans;
            pq.push(ans);
        }
        return res;
    }
};

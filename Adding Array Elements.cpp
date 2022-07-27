Output Status : 

Problem Solved Successfully
Test Cases Passed: 
61 /61
Total Points Scored: 
2 /2
Your Total Score: 
1246
Total Time Taken: 
0.61
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    int minOperations(int arr[], int n, int k) {
        
        int count = 0;
        
        priority_queue<int,vector<int>,greater<int>> pq;
        
        for(int i=0;i<n;i++) pq.push(arr[i]);
        
        while(pq.top() < k){
            
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            
            int z = x+y;
            count++;
            pq.push(z);
        }
        return count;
    }
};

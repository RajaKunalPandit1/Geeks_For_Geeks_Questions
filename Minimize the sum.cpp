Output Status : 

Problem Solved Successfully
Test Cases Passed: 
160 /160
Total Points Scored: 
2 /2
Your Total Score: 
1805
Total Time Taken: 
0.31
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
public:
    int minimizeSum(int n, vector<int> arr) {
        
        priority_queue<int,vector<int>,greater<int>> pq;
        int res = 0;
        
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
        }
        
        while(pq.size() != 1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            int sum = a+b;
            pq.push(sum);
            res += sum;
        }
        return res;
    }
};

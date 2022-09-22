Output Status : 

Problem Solved Successfully
Test Cases Passed: 
72 /72
Total Points Scored: 
4 /4
Your Total Score: 
1396
Total Time Taken: 
0.46
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {

 public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        
        priority_queue<pair<int,int>> pq;
        
        vector<int> res;
        
        int i;
        for(i=0;i<k;i++){
            pq.push({arr[i],i});
        }
        
        res.push_back(pq.top().first);
        
        for(;i<n;i++){
            
            pq.push({arr[i],i});
            
            if(pq.top().second <= i-k){
                
                while(pq.top().second <= i-k){
                    pq.pop();
                }
            }
            res.push_back(pq.top().first);
        }
        return res;    
    }
};

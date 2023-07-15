Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
72 /72
Your Total Score: 
2683
Total Time Taken: 
0.42
Correct Submission Count: 
3
Attempts No.: 
4

// Naive Sol :: 

class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        
        vector<int> res;
        
        for(int i=0;i<n-k+1;i++){
            int max_ele = INT_MIN;
            for(int j=i;j<i+k;j++){
                max_ele = max(max_ele,arr[j]);
            }
            res.push_back(max_ele);
        }
        return res;
    }
};

// Efficient Sol :: 

    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        
        vector<int> res;
        deque<int> q;
        
        for(int i=0;i<k;i++){
            
            while(!q.empty() && arr[q.back()] <= arr[i]){
                q.pop_back();
            }
            q.push_back(i);
        }
        
        for(int i=k;i<n;i++){
            
            res.push_back(arr[q.front()]);
            
            while(!q.empty() && q.front() <= i-k){
                q.pop_front();
            }
            
            while(!q.empty() && arr[q.back()] <= arr[i]){
                q.pop_back();
            }
            q.push_back(i);
        }
        res.push_back(arr[q.front()]);
        return res;
    }

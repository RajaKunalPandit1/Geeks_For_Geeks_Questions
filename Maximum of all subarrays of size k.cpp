Output Status : 

Problem Solved Successfully
Test Cases Passed: 
271 /271
Total Points Scored: 
4 /4
Your Total Score: 
1512
Total Time Taken: 
0.55
Your Accuracy: 
50%
Attempts No.: 
2


class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        
        deque <int> dq;
        vector <int> ans;
        
        for(int i=0;i<k;i++){
            while(!dq.empty() && dq.back() < arr[i]){
                dq.pop_back();
            }
            dq.push_back(arr[i]);
        }
        
        ans.push_back(dq.front());
        
        for(int i=k;i<n;i++){
            if(arr[i-k] == dq.front()){
                dq.pop_front();
            }
            while(!dq.empty() && dq.back() < arr[i]){
                dq.pop_back();
            }
            dq.push_back(arr[i]);
            ans.push_back(dq.front());
        }
        return ans;
    }
};

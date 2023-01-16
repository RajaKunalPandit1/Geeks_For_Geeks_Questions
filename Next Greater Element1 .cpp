Output Status : 

Problem Solved Successfully
Test Cases Passed: 
158 /158
Total Points Scored: 
4 /4
Your Total Score: 
1833
Total Time Taken: 
0.57
Your Accuracy: 
100%
Attempts No.: 
1


class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        
        vector<long long> res;
        
        long long x = -1;
        res.push_back(x);
        
        stack<long long> st;
        
        st.push(arr[n-1]);
        
        for(long long i = n-2;i>=0;i--){
            while(!st.empty() && st.top() < arr[i]){
                st.pop();
            }
            
            if(st.empty()){
                res.push_back(-1);
            }else{
                res.push_back(st.top());
            }
            st.push(arr[i]);
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};

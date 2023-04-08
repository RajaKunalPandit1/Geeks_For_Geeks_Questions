Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1122 /1122
Total Points Scored: 
2 /2
Your Total Score: 
2147
Total Time Taken: 
0.15
Your Accuracy: 
33%
Attempts No.: 
3


class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        
        int n = arr.size();
        
        stack<int> st;
        vector<int> res;
        
        for(int i=0;i<n;i++){
            
            if(st.empty()){
                st.push(arr[i]);
            }else{
                
                if((arr[i] >= 0 && st.top() < 0) || (arr[i] < 0 && st.top() >= 0)){
                    st.pop();
                }else{
                    st.push(arr[i]);
                }
            }
        }
        
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        
        reverse(res.begin(),res.end());
        return res;
        
    }
};

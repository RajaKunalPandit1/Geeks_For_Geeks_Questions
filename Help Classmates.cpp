Output Status : 

Problem Solved Successfully
Test Cases Passed: 
264 /264
Total Points Scored: 
4 /4
Your Total Score: 
2681
Total Time Taken: 
0.74
Your Accuracy: 
100%
Attempts No.: 
1

vector<int> help_classmate(vector<int> arr, int n) 
    { 
        vector<int> res(n,-1);
        
        stack<int> st;
        
        st.push(arr[n-1]);
        
        for(int i=n-2;i>=0;i--){
            
            while(!st.empty() && arr[i] <= st.top()){
                st.pop();
            }
            
            res[i] = !st.empty()?st.top():-1;
            st.push(arr[i]);
        }
        return res;
    } 

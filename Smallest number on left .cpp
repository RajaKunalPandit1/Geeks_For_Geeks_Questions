Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
207 /207
Your Total Score: 
1386
Total Time Taken: 
0.41
Correct Submission Count: 
2
Attempts No.: 
4


class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        
        vector<int> res(n,-1);
        stack<int> st;
        
        res[0] = -1;
        st.push(a[0]);
        
        for(int i=1;i<n;i++){
            
            while(!st.empty() && a[i] <= st.top()){
                st.pop();
            }
            
            if(st.empty()){
                res[i] = -1;
            }else{
                res[i] = st.top();
            }
            st.push(a[i]);
        }
        return res;
        
    }
};

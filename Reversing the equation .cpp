Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1115 /1115
Your Total Score: 
2392
Total Time Taken: 
0.03
Correct Submission Count: 
2
Attempts No.: 
2

class Solution {
{
  public:
    string reverseEqn (string s)
        {
            string res = "";
            
            stack<char> st;
            
            int n = s.size();
            
            for(int i=n;i>=0;i--){
                if(s[i] == '-' || s[i] == '/' || s[i] == '+' || s[i] == '*'){
                    while(!st.empty()){
                        res += st.top();
                        st.pop();
                    }
                    res += s[i];
                }else{
                    st.push(s[i]);
                }
            }
            
            while(!st.empty()){
                res += st.top();
                st.pop();
            }
        return res;
        }
 };

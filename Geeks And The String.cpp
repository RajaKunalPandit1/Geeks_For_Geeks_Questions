Output Status :

Problem Solved Successfully
Test Cases Passed: 
167 /167
Total Points Scored: 
4 /4
Your Total Score: 
1855
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
  public:
    string removePair(string s) {
        
        stack <char> st;

        st.push(s[0]);
        int i=1;

        while(i < s.length()){
            if(!st.empty() && st.top() == s[i])
                st.pop(),i++;
            else
                st.push(s[i]),i++;
        }
        if(st.empty())

            return "-1";
            
        s.clear();

        while(!st.empty()){
            s = st.top() + s;
            st.pop();
        }
        return s;
    }
};

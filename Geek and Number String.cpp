Output Status : 

Problem Solved Successfully
Test Cases Passed: 
210 /210
Total Points Scored: 
4 /4
Your Total Score: 
1400
Total Time Taken: 
0.37
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    int minLength(string s, int n) {
        
        stack<char> st;
        
        unordered_set<string> t = {"12","21","34","43","56","65","78","87","09","90"};
        
        for(int i=0;i<n;i++){
            
            string temp = "";
            temp += s[i];
            if(st.empty() || t.find(st.top()+temp) == t.end()){
                st.push(s[i]);
            }else{
                if(t.find(st.top()+temp) != t.end()){
                    st.pop();
                }
            }
        }
        return st.size();
    } 
};

Output Status:

Problem Solved Successfully 
Total Points Scored:
4/4
Total Time Taken:
0.4/1.8
Your Accuracy:
50%
Attempts No.:
2
  
  class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        vector<int> res;
        
        stack<int>s;
        s.push(a[0]);
        res.push_back(-1);
        
        for(int i=1;i<n;i++){
            while(!s.empty() and a[i]<=s.top()){
                s.pop();
            }
            int span = s.empty()?-1:s.top();
            res.push_back(span);
            s.push(a[i]);
        }
            return res;

    }
};

// Another Solution


class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        stack<int> st;
        vector<int> sol;
        sol.push_back(-1);
        st.push(a[0]);
        for(int i = 1;i < n;i++){
            if(a[i] > st.top()){
                sol.push_back(st.top());
                st.push(a[i]);
            }else{
                while(!st.empty() && a[i] <= st.top())
                    st.pop();
                if(st.empty())
                    sol.push_back(-1);
                else
                    sol.push_back(st.top());
                st.push(a[i]);
            }
        }
        return sol;
    }
};

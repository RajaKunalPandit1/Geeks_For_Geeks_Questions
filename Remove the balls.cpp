Output Status :

Problem Solved Successfully
Test Cases Passed: 
1111 /1111
Total Points Scored: 
4 /4
Your Total Score: 
2177
Total Time Taken: 
0.04
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    int finLength(int n, vector<int> color, vector<int> radius) {
        
        stack<int> st1,st2;
        
        st1.push(color[0]);
        st2.push(radius[0]);
        
        for(int i=1;i<n;i++){
            
            if(!st1.empty() && !st2.empty() && st1.top() == color[i] && st2.top() == radius[i]){
                st1.pop();
                st2.pop();
            }else{
                st1.push(color[i]);
                st2.push(radius[i]);
            }
        }
        
        return (st2.size());
        
    }
};

// Another Solution :: 

class Solution {
  public:
    int finLength(int n, vector<int> color, vector<int> radius) {
        
        stack<pair<int,int>> st;
        
        st.push({color[0],radius[0]});
        
        for(int i=1;i<n;i++){
            if(!st.empty() && st.top().first == color[i] && st.top().second == radius[i]){
                st.pop();
            }else{
                st.push({color[i],radius[i]});
            }
        }
        return st.size();
    }
};

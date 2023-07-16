Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1130 /1130
Total Points Scored: 
1 /1
Your Total Score: 
2694
Total Time Taken: 
0.27
Your Accuracy: 
100%
Attempts No.: 
1

    queue<int> rev(queue<int> q)
    {
        stack<int> st;
        
        while(!q.empty()){
            st.push(q.front());
            q.pop();
        }
        
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        return q;
    }

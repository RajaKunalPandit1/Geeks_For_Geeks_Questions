Output Status :

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2739
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1

    void Reverse(stack<int> &st){
        
        vector<int> v;
        
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        
        for(int i=0;i<v.size();i++){
            st.push(v[i]);
        }
    }

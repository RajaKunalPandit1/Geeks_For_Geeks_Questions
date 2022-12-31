Output Status : 

Problem Solved Successfully
Test Cases Passed: 
163 /163
Total Points Scored: 
4 /4
Your Total Score: 
1767
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

vector<int> asteroidCollision(int n, vector<int> &arr) {
        
        stack<int> st;
        st.push(arr[0]);
        
        
        for(int i=1;i<n;i++){
            int val = arr[i];
            bool flag = false;
            
            while(val < 0 && !st.empty()){
                if(st.top() > 0){
                    if(abs(st.top()) > abs(val)){
                        flag = true;
                        break;
                    }else if(abs(st.top()) < abs(val)){
                        st.pop();
                    }else{
                        st.pop();
                        flag = true;
                        break;
                    }
                }else{
                    break;
                }
            }
            if(flag == false){
                st.push(val);
            }
        }
        
        vector<int> res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
    
// Another Solution

    vector<int> res;
    for (int i = 0; i < N; i++) {
        if (ast[i] > 0) {
            res.push_back(ast[i]);
        }
        else {
            while (!res.empty() && res.back() > 0 && res.back() < abs(ast[i])) {
                res.pop_back();
            }
            if (res.empty() || res.back() < 0) {
                res.push_back(ast[i]);
            }
            else if (res.back() == abs(ast[i])) {
                res.pop_back();
            }
        }
    }
    return res;

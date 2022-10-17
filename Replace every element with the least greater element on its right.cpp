Output Status : 

Problem Solved Successfully
Test Cases Passed: 
104 /104
Total Points Scored: 
4 /4
Your Total Score: 
1480
Total Time Taken: 
1.67
Your Accuracy: 
100%
Attempts No.: 
1


class Solution{
    public:
    vector<int> findLeastGreater(vector<int>& arr, int n) {
     
        set<int> st;
        vector<int> res(n,-1);
        
        for(int i=n-1;i>=0;i--){
            
            st.insert(arr[i]);
            
            auto itr = st.find(arr[i]);
            advance(itr,1);
            
            if(itr == st.end()){
                continue;
            }else{
                res[i] = *(itr);
            }
        }
        return res;
    }
};

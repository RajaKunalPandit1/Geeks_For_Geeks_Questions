Output Status : 

Suggest Feedback
Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2683
Total Time Taken: 
0.09
Correct Submission Count: 
2
Attempts No.: 
9


class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&st, int n)
    {
        vector<int> temp;
        
        while(!st.empty()){
            temp.push_back(st.top());
            st.pop();
        }
        
        int idx = ceil(n/2);
        
        temp.erase(temp.begin()+idx);
        
        reverse(temp.begin(),temp.end());
        
        for(int i=0;i<temp.size();i++){
            st.push(temp[i]);
        }
    }

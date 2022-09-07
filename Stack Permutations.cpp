Output Status : 

Problem Solved Successfully
Test Cases Passed: 
101120 /101120
Total Points Scored: 
4 /4
Your Total Score: 
1354
Total Time Taken: 
0.48
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    int isStackPermutation(int n,vector<int> &arr,vector<int> &brr){
        
        stack<int> st;
        
        int i=0,j=0;
        
        for(int i=0;i<n;i++){
            
            while(!st.empty() && st.top() == brr[j]){
                j++;
                st.pop();
            }
            st.push(arr[i]);
        }
        
        while(!st.empty()){
            
            if(st.top() != brr[j]) return 0;
            st.pop();
            j++;
            
        }
        return 1;
    }
];    

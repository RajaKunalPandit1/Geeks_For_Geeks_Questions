Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1116 /1116
Your Total Score: 
2277
Total Time Taken: 
0.06
Correct Submission Count: 
3
Attempts No.: 
5

// Naive Solution :: Time : O(N*logN) :: Aux_Space : O(1)

class Solution {
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n){
      
        int res =1,curr=1;
        
        sort(arr,arr+n);
        
        for(int i=1;i<n;i++){
            if(arr[i] == arr[i-1]+1){
                curr++;
            }else{
                res = max(res,curr);
                curr = 1;
            }
        }
        return max(res,curr);
    }
};

// Efficient Solution :: Time : O(N) :: Aux_Space : O(N)

class Solution {
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
          
        unordered_set<int> st(arr,arr+n);
        
        int res = 1,curr = 1;
        
        for(auto x: st){
            
            if(st.find(x-1) == st.end()){
                
                curr = 1;
                
                while(st.find(x+curr) != st.end()){
                    curr++;
                }
                res = max(res,curr);
            }
        }
        return res;
    }
};

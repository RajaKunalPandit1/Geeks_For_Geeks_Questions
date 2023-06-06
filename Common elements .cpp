Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
158 /158
Your Total Score: 
2402
Total Time Taken: 
0.22
Correct Submission Count: 
4
Attempts No.: 
8

class Solution {
{
    public:    
         vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> res;
            int i=0,j=0,k=0;
            int last = INT_MIN;
            while(i<n1 and j<n2 and k<n3){
                
                if(A[i] == B[j] and A[i] == C[k] and A[i]!=last){
                    res.push_back(A[i]);
                    last = A[i];
                    i++;
                    j++;
                    k++;
                }else if(A[i]<B[j] or A[i] < C[k]){
                    i++;
                }else if(B[j]<A[i] or B[j] < C[k]){
                    j++;
                }else{
                    k++;
                }
            }
            return res;
        }
 };

// Another Solution :: 
  
  class Solution
{
    public:
        vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int i = 0, j = 0, k = 0;
            
            vector <int> res;
            int last = INT_MIN;
            while (i < n1 and j < n2 and k < n3)
            {
                if (A[i] == B[j] and A[i] == C[k] and A[i] != last) 
                {
                    res.push_back (A[i]);
                    last = A[i];
                    i++;
                    j++;
                    k++;
                }
                else if (min ({A[i], B[j], C[k]}) == A[i]) i++;
                else if (min ({A[i], B[j], C[k]}) == B[j]) j++;
                else k++;
            }
            return res;
        }

};

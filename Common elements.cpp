Output Status:

Problem Solved Successfully 
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Total Time Taken:
0.2/1.5
Correct Submission Count:
3
Attempts No.:
5
  
class Solution  
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

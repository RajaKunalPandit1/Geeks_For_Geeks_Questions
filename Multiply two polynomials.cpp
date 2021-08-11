Output Status:
Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/3.4
Your Accuracy:
50%
Attempts No.:
2
  
  // Time: O(m*n) :: Aux_Space: O(1);
  
  class Solution{
    public:
    vector<int>polyMultiply(int arr1[], int arr2[], int M, int N)
    {
        vector<int> res(M+N+1);
        
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                res[i+j]+=(arr1[i]*arr2[j]);
            }
        }
        return res;
        
        
    }

    // Another Solution 
    
    
  //Back-end complete function Template for C++
class Solution {
  public:
    vector<int>polyMultiply(int Arr1[], int Arr2[], int M, int N)
{
   vector<int>ans(M+N-1);
 
   // Initialize the porduct polynomial
   for (int i = 0; i<M+N-1; i++)ans[i] = 0;
 
   // Multiply two polynomials term by term
 
   // Take ever term of first polynomial
   for (int i=0; i<M; i++)
   {
     // Multiply the current term of first polynomial
     // with every term of second polynomial.
     for (int j=0; j<N; j++)
         ans[i+j] += Arr1[i]*Arr2[j];
   }
 
   return ans;
}
}

Output Status :

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
58 /58
Total Time Taken: 
0.4 /5.8
Correct Submission Count: 
2
Attempts No.: 
2
  
// Time : O(N*2^N) :: Aux_Space : O(2^N)

class Solution{
  public:
    
    bool subSum(int a[], vector<int> &selected, int k, int n, int subSums, int index, int tempSum){
        
        if(k == 0) return true;
        
        if(tempSum > subSums) return false;
        
        if(tempSum == subSums){
            return subSum(a,selected,k-1,n,subSums,0,0);
        }
        
        for(int i=0;i<n;i++){
            
            if(selected[i]) continue;
            
            selected[i] = 1;
            
            if(subSum(a,selected,k,n,subSums,i+1,tempSum + a[i])){
                return true;
            }
            selected[i] = 0;
        }
        return 0;
    }
  
    bool isKPartitionPossible(int a[], int n, int k)
    {
         int sum = 0;
         
         for(int i=0;i<n;i++){
             sum += a[i];
         }
         
         if(sum%k != 0 || k > n) return false;
         
         int subSums = sum/k;
         vector<int>selected(n,0);
         
         return subSum(a,selected,k,n,subSums,0,0);
    }
};

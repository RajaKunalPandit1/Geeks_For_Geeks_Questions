Output Status :

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
580 /580
Your Total Score: 
1536
Total Time Taken: 
1.78
Correct Submission Count: 
2
Attempts No.: 
2


class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        
        int low = 1;
        int high = 2000;
        
        while(low <= high){
            
            int mid = (low+high)/2;
            
            int small_count = 0;
            int large_count = 0;
            
            for(int i=0;i<R;i++){
                int ind = lower_bound(matrix[i].begin(),matrix[i].end(),mid) - matrix[i].begin();
                small_count +=ind;
                ind = lower_bound(matrix[i].begin(),matrix[i].end(),mid+1) - matrix[i].begin();
                large_count += (C-ind);
            }
            if(small_count <= (R*C)/2 && large_count <= (R*C)/2){
                return mid;
            }
            if(small_count > (R*C)/2){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return -1;
    }
};

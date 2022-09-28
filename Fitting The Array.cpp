Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1870 /1870
Total Points Scored: 
2 /2
Your Total Score: 
1414
Total Time Taken: 
0.51
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    
    bool isFit(int arr[], int brr[], int n){
        
        sort(arr,arr+n);
        sort(brr,brr+n);
        
        bool flag = true;
        
        for(int i=0;i<n;i++){
            if(arr[i] > brr[i]){
                flag = false;
                break;
            }
        }
        return flag;
    }
};

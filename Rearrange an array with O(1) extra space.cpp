Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1115 /1115
Your Total Score: 
2515
Total Time Taken: 
0.29
Correct Submission Count: 
3
Attempts No.: 
6

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
        
        for(int i=0;i<n;i++){
            arr[i] += (arr[arr[i]]%n) * n;
        }
        
        for(int i=0;i<n;i++){
            arr[i] = arr[i]/n;
        }
        return;
    }
};

Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
35 /35
Your Total Score: 
1414
Total Time Taken: 
0.99
Correct Submission Count: 
10
Attempts No.: 
14

class Solution{
{
    public:
    void sort012(int a[], int n)
    {
        int low = 0,high = n-1,mid = 0;
        
        while(mid <= high){
            
            if(a[mid] == 0){
                swap(a[low++],a[mid++]);
            }else if(a[mid] == 1){
                mid++;
            }else{
                swap(a[mid],a[high--]);
            }
        }
        
    }
};

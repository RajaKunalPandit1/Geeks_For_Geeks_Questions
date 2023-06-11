Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1111 /1111
Total Points Scored: 
2 /2
Your Total Score: 
2425
Total Time Taken: 
0.27
Your Accuracy: 
100%
Attempts No.: 
1


class Solution{
    public:
    void update(int a[], int n, int updates[], int k){
        
        for(int i=0;i<k;i++){
            a[updates[i]-1]++;
        }
        
        for(int i=1;i<n;i++){
            a[i] += a[i-1];
        }
        
    }
};

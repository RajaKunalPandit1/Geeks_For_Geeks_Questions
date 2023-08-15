Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1332 /1332
Total Points Scored: 
2 /2
Your Total Score: 
2766
Total Time Taken: 
0.25
Your Accuracy: 
50%
Attempts No.: 
2

class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        int localans=0, globalans=0, onescnt=0;
        
        for(int i=0; i<n ;i++){
            if(a[i]==1){
                onescnt++;
            }
            
            if(a[i]==0){
                localans++;
            }else{
                localans--;
            }
            globalans= max(globalans, localans);
            if(localans<0){
                localans=0;
            }
        }
        
        return globalans+onescnt;
    }
};

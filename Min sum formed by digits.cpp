Output Status : 

Problem Solved Successfully
Test Cases Passed: 
100110 /100110
Total Points Scored: 
2 /2
Total Time Taken: 
0.48 /3.16
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        
        long long int num1 = 0,num2 = 0;
        
        sort(arr,arr+n);
        
        for(int i=0;i<n;i++){
            
            if(i%2 == 0){
                
                num1 = num1*10 + arr[i];
                
            }else{
                
                num2 = num2*10 + arr[i];
                
            }
            
        }
        return (num1+num2);
    }
};

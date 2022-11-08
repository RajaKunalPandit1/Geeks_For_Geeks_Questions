Output Status : 

Problem Solved Successfully
Test Cases Passed: 
10025 /10025
Total Points Scored: 
4 /4
Your Total Score: 
1560
Total Time Taken: 
0.68
Your Accuracy: 
100%
Attempts No.: 
1


class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        long long int temp = 0;
        for(int i=0;i<N;i++) temp^=Arr[i];
        
        //checking right side se 1   // basically masking
        long long int check = 1;
        while(!(check & temp)) check<<=1;
        
        // 0 is identity for xor
        long long int a=0,b=0;
        for(int i=0;i<N;i++)
        {
            if(check&Arr[i]) a^=Arr[i];
            else b^=Arr[i];
        }
        vector<long long int> ans = {max(a,b),min(a,b)};
        return ans;
    }
};

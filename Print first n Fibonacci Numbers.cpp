Output Status :

Problem Solved Successfully
Test Cases Passed: 
100 /100
Total Points Scored: 
1 /1
Your Total Score: 
2851
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

vector<long long> printFibb(int n) 
    {
       if(n == 1) return {1};
        
        vector <long long> ans(n , 0);
        
        ans[0] = 1;
        ans[1] = 1;
        
        for(int i = 2 ; i < n ; i++){
            ans[i] = ans[i-1]+ans[i-2];
        }
        
        return ans;
    }

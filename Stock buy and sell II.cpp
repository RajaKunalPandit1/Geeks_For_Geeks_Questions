Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2665
Total Time Taken: 
0.07
Your Accuracy: 
100%
Attempts No.: 
1

    int stockBuyAndSell(int n, vector<int> &prices) {
        
        int res = 0;
        int sum = 0;
        
        for(int i=1;i<n;i++){
            
            sum = prices[i] - prices[i-1];
            res = max(res,res + sum);
        }
        return res;
    }

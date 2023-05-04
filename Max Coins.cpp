Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2251
Total Time Taken: 
1.75
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    int maxCoins(int n,vector<vector<int>> &ranges){
        
        sort(ranges.begin(), ranges.end());
        
        vector<int>search_space(n);
        
        for(int i = 0; i < n; i++)
        {
            search_space[i] = ranges[i][0];
        }
        
        vector<int>SuffixMax(n);
        
        int currentMax = 0;
        
        for(int i = n - 1; i >= 0; i--){
            
            currentMax = max(currentMax, ranges[i][2]);
            SuffixMax[i] = currentMax;
        }
        
        int maxProfit = 0;
        
        for(int i = 0; i < n; i++){
            
            int profit_i = ranges[i][2];
            
            int end_i = ranges[i][1];
            
            auto upperBound = upper_bound(search_space.begin() + i + 1, search_space.end(), end_i - 1);
            
            if(upperBound != search_space.end()){
                
                int next_i = upperBound - search_space.begin();
                if(next_i > i)profit_i += SuffixMax[next_i];
            
            }
            
            maxProfit = max(maxProfit, profit_i);
        }
        return maxProfit;
    }
};

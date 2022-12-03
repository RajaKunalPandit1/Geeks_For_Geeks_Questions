Output Status : 

Problem Solved Successfully
Test Cases Passed: 
121 /121
Total Points Scored: 
4 /4
Your Total Score: 
1667
Total Time Taken: 
0.15
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
public:

 bool isPossible(int m,int k,vector<int> stalls)
    {
        int co_ordinate = stalls[0],cnt = 1;
        
        for(int i=1;i<stalls.size();i++)
        {
            if(stalls[i]-co_ordinate>=m)
            {
                cnt++;
                co_ordinate = stalls[i];
            }
            if(cnt==k)
            {
                return 1;
            }
        }
        return 0;
    }
    int solve(int n, int k, vector<int> &stalls) {
        
        sort(stalls.begin(),stalls.end());
        
        int l = 1,r = stalls[n-1]-stalls[0],ans = INT_MIN;
        
        while(l<=r)
        {
            int m = l+(r-l)/2;
            
            if(isPossible(m,k,stalls))
            {
                l = m+1;
                ans = m;
            }
            else
            {
                r = m-1;
            }
        }
        
        return ans;
    }
};

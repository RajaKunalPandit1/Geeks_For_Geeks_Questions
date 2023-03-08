Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1110 /1110
Total Points Scored: 
8 /8
Your Total Score: 
2035
Total Time Taken: 
0.28
Your Accuracy: 
100%
Attempts No.: 
1

#define lli long long int
class Solution
{
    public:
    bool check(vector<int> &arr, int days, int water, lli h)
    {
        int n= arr.size();
        vector<long long> waterSupply(n,0);
        if(arr[0] < h)
        {
            waterSupply[0] = h - arr[0];
            days -= (h - arr[0]);
        }
        if(days < 0) return false;
        
        for(int i=1;i<arr.size();i++)
        {
            waterSupply[i] = waterSupply[i-1];
            int actualHeight = arr[i];
            if(i >= water)
            {
                actualHeight += (waterSupply[i] - waterSupply[i - water]);
            }
            else
            {
                actualHeight += waterSupply[i];
            }
            
            if(actualHeight < h)
            {
                waterSupply[i] += (h - actualHeight);
                days -= (h - actualHeight);
            }
            if(days < 0) return false;
        }
        return true;
    }
        
    lli maximizeMinHeight(int n, int k, int w, vector <int> &a)
    {
        
        lli ans = -1, lo = (*min_element(a.begin(), a.end())), hi = INT_MAX;
        while(lo <= hi)
        {
            int mid = (hi + lo) / 2;
            if(check(a, k, w, mid))
            {
                ans = mid;
                lo = mid+1;
            }
            else
                hi = mid-1;
        }
        return ans;
    }
};

Output Status:

Runtime: 16 ms, faster than 90.62% of C++ online submissions for Combinations.
Memory Usage: 9.8 MB, less than 61.93% of C++ online submissions for Combinations.


class Solution {
public:
   vector<vector<int>>ans;
    void helper(vector<int> &nums,int src,int n, int k, vector<int> &temp)
    {   if (k==0)
        {
            ans.push_back(temp);
            return ;
        }
        if(src>n) return;
        temp.push_back(nums[src]);
        helper(nums,src+1,n,k-1,temp);
        temp.pop_back();
        helper(nums,src+1,n,k,temp);
    }
    vector<vector<int>> combine(int n, int k) {
        
        vector<int>temp;
        vector<int>nums;
        for(int i=1;i<=n;i++)
        {
            nums.push_back(i);
        }
        helper(nums,0,n-1, k, temp);
        return ans;
    }
};

Output Status:

Runtime: 4 ms, faster than 69.97% of C++ online submissions for Permutations.
Memory Usage: 7.8 MB, less than 57.50% of C++ online submissions for Permutations.


class Solution {
public:
    void helper(vector<int>&nums, vector<int>& ans, vector<vector<int>>& res){
        
        if( size(ans) == size(nums)){
            res.push_back(ans);
            return;
        }
        
        for(int i = 0; i<size(nums); i++){
                if(find(begin(ans), end(ans), nums[i]) == ans.end()){
                    ans.push_back(nums[i]);
                    helper(nums,ans, res);
                    ans.pop_back(); 
                }  
        }        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<int> ans;
        vector<vector<int>> res;
        helper(nums, ans, res);
        return res;
    }
};

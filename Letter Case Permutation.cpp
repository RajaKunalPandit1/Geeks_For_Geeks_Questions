Output Status:

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Letter Case Permutation.
Memory Usage: 9.4 MB, less than 95.21% of C++ online submissions for Letter Case Permutation.


class Solution {
public:
    vector<string> letterCasePermutation(string s) {
     
          vector<string> ans = {""}; 
        for (auto& ch : s) 
            for (int i = 0, n = ans.size(); i < n; ++i) {
                if (isalpha(ch)) ans.push_back(ans[i] + string(1, ch^32)); 
                ans[i].push_back(ch); 
            }
        return ans; 
        
    }
};


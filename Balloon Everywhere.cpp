Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1021 /1021
Total Points Scored: 
2 /2
Your Total Score: 
1921
Total Time Taken: 
0.21
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    int maxInstance(string s){
        
        int n = s.length();
        string str = "balon";
        
        unordered_map<char,int> mp;
        
        for(char &ch : s){
            if(str.find(ch) < str.size()){
                ++mp[ch];
            }
        }
        
        mp['o'] /= 2;
        mp['l'] /= 2;
        
        int res = INT_MAX;
        
        for(auto &val : mp){
            res = min(res,val.second);
        }
        return res;
    }
};

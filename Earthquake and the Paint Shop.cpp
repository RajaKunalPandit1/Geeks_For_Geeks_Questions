Output Status : 

Problem Solved Successfully
Test Cases Passed: 
125 /125
Total Points Scored: 
2 /2
Your Total Score: 
1508
Total Time Taken: 
0.27
Your Accuracy: 
100%
Attempts No.: 
1

struct alphanumeric {
    string name;
    int count;
};
class Solution {
  public:
    vector<alphanumeric> sortedStrings(int n, vector<string> a) {
        
        map<string,int> mp;
        
        for(auto &str : a){
            mp[str]++;
        }
        
        vector<alphanumeric> res;
        
        for(auto &p : mp){
            struct alphanumeric temp;
            temp.name = p.first;
            temp.count = p.second;
            res.push_back(temp);
        }
        return res;
    }
};

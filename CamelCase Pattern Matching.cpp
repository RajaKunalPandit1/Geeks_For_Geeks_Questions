Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2369
Total Time Taken: 
0.06
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> a, string pat) {
        
        vector<pair<string,string>> b;
        vector<string> s;
        
        string res = "";
        
        int i,j,c=0;
        
        for(int i=0;i<a.size();i++){
            res = "";
            for(int j=0;j<a[i].size();j++){
                if(a[i][j] >= 65 && a[i][j] <= 90){
                    res+= a[i][j];
                }
            }
            b.push_back(make_pair(a[i],res));
        }
        
        for(auto &x : b){
            if(!x.second.find(pat)){
                s.push_back(x.first);
                c++;
            }
        }
        
        if(c == 0) s.push_back("-1");
        
        sort(s.begin(),s.end());
        return s;
    }
};

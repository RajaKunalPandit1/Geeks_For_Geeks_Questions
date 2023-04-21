Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1116 /1116
Total Points Scored: 
4 /4
Your Total Score: 
2205
Total Time Taken: 
0.57
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    int prefixSuffixString(vector<string> &s1,vector<string> s2){
        
        unordered_set<string> st1,st2;
        
        for(int i=0;i<s1.size();i++){
            int n = s1[i].size();
            string a = "";
            
            for(int j=0;j<n;j++){
                a.push_back(s1[i][j]);
                st1.insert(a);
            }
        }
        
        for(int i=0;i<s1.size();i++){
            int n = s1[i].size();
            string a = "";
            
            for(int j=n-1;j>=0;j--){
                a.push_back(s1[i][j]);
                string y = a;
                reverse(y.begin(),y.end());
                st2.insert(y);
            }
        }
        
        int c = 0;
        
        for(int i=0;i<s2.size();i++){
            string x = s2[i];
            if(st1.find(x) != st1.end() || st2.find(x) != st2.end()){
                c++;
            }
        }
        return c;
    }
};

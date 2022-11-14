Output Status : 

Problem Solved Successfully
Test Cases Passed: 
59 /59
Total Points Scored: 
4 /4
Your Total Score: 
1586
Total Time Taken: 
0.01
Your Accuracy: 
50%
Attempts No.: 
2

class Solution{   
public:
    int func(int i,int j,string &s, string &w, vector<int> &vis){
        
        while(i < s.length()){
            
            if(s[i] == w[j] && vis[i] == 0){
                j++;
                vis[i] = 1;
            }
            if(j == w.length()){
                return 1;
            }
            i++;
        }
        return 0;
    }

    int numberOfSubsequences(string s, string w){
        
        int n = s.length();
        
        int cnt = 0;
        
        vector<int>vis(n,0);
        
        while(func(0,0,s,w,vis)){
            cnt++;
        }
        return cnt;
    }
};

Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
1985
Total Time Taken: 
0.02
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    int checkCompressed(string s, string t) {
        
        int i=0;
        int j=0;
        
        while(i<t.length() && j<s.length()){
            
            char ch = t[i];
            char ch1 = s[j];
            
            if(ch >='A' && ch <='Z'){
                if(ch == ch1){
                    i++;
                    j++;
                }else{
                    return 0;
                }
            }else{
                int num = 0;
                while(i<t.length() && t[i] >= '0' && t[i] <= '9'){
                    
                    num = num * 10 + (t[i]-'0')%10;
                    i++;
                }
                j += num;
            }
        }
        if(i == t.length() && j == s.length()){
            return 1;
        }
        return 0;
    }
};


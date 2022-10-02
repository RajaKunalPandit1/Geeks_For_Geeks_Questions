Output Status : 

Problem Solved Successfully
Test Cases Passed: 
576 /576
Total Points Scored: 
8 /8
Your Total Score: 
1430
Total Time Taken: 
0.08
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    int isPal(string str, int n){
        
        int i=0;
        
        while(i<=n){
            
            if(str[i] != str[n]) return false;
            
            i++; n--;
        }
        return true;
    }

    int minChar(string str){
        
        int n = str.size();
        
        for(int i=n-1;i>=1;i--){
            if(str[i] == str[0] && isPal(str,i)) return (n-i-1);
        }
        return n-1;
    }
};

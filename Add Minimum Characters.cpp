Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1031 /1031
Total Points Scored: 
4 /4
Your Total Score: 
2145
Total Time Taken: 
0.04
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{   
public:
    int addMinChar(string str){    
        
        int n = str.length();
        int start = 0,end = n-1;
        int res = 0;
        
        while(start < end){
            
            if(str[start] == str[end]){
                start++;
                end--;
            }else{
                res++;
                start = 0;
                end = n - res - 1;
            }
        }
        return res;
    }
};

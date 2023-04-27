Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1129 /1129
Total Points Scored: 
2 /2
Your Total Score: 
2225
Total Time Taken: 
0.07
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& s){
        
        if(s[0] == 0 && s[1] == 0){
            n--;
            s[0] = 1;
        }
        
        for(int i=1;i<m-1;i++){
            
            if(s[i] == 0){
                if(s[i+1] == 0 && s[i-1] == 0){
                    n--;
                    s[i] = 1;
                }
            }
        }
        
        if(s[m-2] == 0 && s[m-1] == 0){
            n--;
        }
        return (n<=0);
    }
};

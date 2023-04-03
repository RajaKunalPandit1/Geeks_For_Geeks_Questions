Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1135 /1135
Total Points Scored: 
2 /2
Your Total Score: 
2131
Total Time Taken: 
0.15
Your Accuracy: 
20%
Attempts No.: 
5


class Solution
{

public:
    int xmod11(string x)
    {
        int n = 0;
     for(int i = 0 ; i < x.length() ; i++){
         n = ((n*10) + (x[i]-'0'))%11;
     }
    return n;
    }
};

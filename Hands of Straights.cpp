Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2325
Total Time Taken: 
0.14
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    bool isStraightHand(int N, int g, vector<int> &hand) {
           if(N%g!=0)return false;
        int cnt  = 0;
        sort(hand.begin(),hand.end());
        for(int i = 1 ; i< N ; i++)
        {
            if(hand[i]-hand[i-1]!=1)
            cnt++;
        }
        if(N==g)
        if(cnt>0)return false;
        
        
        if(cnt<=(N/g))return true;
        return false;
    }
};

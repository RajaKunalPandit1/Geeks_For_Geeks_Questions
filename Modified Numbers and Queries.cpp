Output Status : 

Problem Solved Successfully
Test Cases Passed: 
10114 /10114
Total Points Scored: 
2 /2
Your Total Score: 
1432
Total Time Taken: 
0.02
Your Accuracy: 
50%
Attempts No.: 
2

class Solution {
  public:
    int sumOfAll(int l, int r){
        
        vector<int> table(r+1,0);
        table[1] = 1;
        
        for(int i=2;i<=r;i++){
            
            if(table[i]){continue;}
            
            for(int j=i;j<=r;j+=i){ table[j] += i;}
        }
        
        int sum = 0;
        
        for(int i=l;i<=r;i++){
            sum += table[i];
        }
        return sum;
    }
};

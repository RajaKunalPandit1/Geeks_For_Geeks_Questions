Output Status : 

Problem Solved Successfully
Test Cases Passed: 
125 /125
Total Points Scored: 
4 /4
Your Total Score: 
1891
Total Time Taken: 
0.46
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{   
public:
    long long int distinctColoring(int n, int r[], int g[], int b[]){
        
        vector<long long int> lastCol(3);
        vector<long long int> currCol(3);
        
        lastCol[0] = r[0];
        lastCol[1] = g[0];
        lastCol[2] = b[0];
        
        for(int i = 1; i < n; i++) {
            currCol[0] = min(lastCol[1], lastCol[2]) + r[i];
            currCol[1] = min(lastCol[0], lastCol[2]) + g[i];
            currCol[2] = min(lastCol[0], lastCol[1]) + b[i];
            
            lastCol = currCol;
        }
        
        return min(currCol[0], min(currCol[1], currCol[2]));
        
    }
 };

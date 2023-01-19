Output Status :

Problem Solved Successfully
Test Cases Passed: 
1058 /1058
Total Points Scored: 
4 /4
Your Total Score: 
1841
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
    int noOfFolds(int a,int b, int m,int n){
        int folds = 0;
        while(a>m){
            a /= 2;
            folds++;
        }
        while(b>n){
            b /= 2;
            folds++;
        }
        return folds;
    }
    
    public:
    int carpetBox(int A, int B, int C, int D){
        return min(noOfFolds(A,B,C,D),noOfFolds(B,A,C,D));
    }
};

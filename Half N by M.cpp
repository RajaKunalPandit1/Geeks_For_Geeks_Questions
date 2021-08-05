Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/1.5
Your Accuracy:
100%
Attempts No.:
1
  
  class Solution{
public:
    int mthHalf(int N, int M){
        
        int res = N;
        int i=1;
       while(i<M){
           N = N/2;
           i++;
       }
        return N;
    }
};

// Another Solution 

class Solution{
public:
    int mthHalf(int N, int M){
        
        while(M-1){
            N = N/2;
            M--;
        }
        return N;
        
    }
};

// Another Solution

class Solution{
public:
    int mthHalf(int N, int M){
        int x = log(N)/log(2);
        if(x + 1 < M)
            return 0;
        int y = N / pow(2, M-1);
        return y;
    }
};

Output Status:
Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/1.0
Your Accuracy:
100%
Attempts No.:
1
  
    class Solution{
public:
    int isBitSet(int N){
        
        return ((N&(N>>1))==N/2)?1:0;
        
    }
};

// Another Solution

class Solution{
public:
    int isBitSet(int N){
        if (N == 0)
        return 0;
 
        // if true, then all bits are set
        if (((N + 1) & N) == 0)
            return 1;
     
        // else all bits are not set
        return 0; 
    }
};

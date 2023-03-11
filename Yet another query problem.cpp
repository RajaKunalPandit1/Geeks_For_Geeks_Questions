Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2047
Total Time Taken: 
0.1
Your Accuracy: 
100%
Attempts No.: 
1

  public:
    vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        vector<int> fre(N,0);
        for(int i=0;i<N;i++) {
            for(int j=i;j<N;j++) if(A[i]==A[j]) fre[i]++;
        }
        vector<int> list;
        for(vector<int> q : Q) {
            int f=0;
            for(int i=q[0];i<=q[1];i++) {
                if(fre[i]==q[2]) f++;
            }
            list.push_back(f);
        }
        return list;
    }
};

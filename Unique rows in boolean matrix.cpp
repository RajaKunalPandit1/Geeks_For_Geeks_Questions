Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
2 /2
Your Total Score: 
2587
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1

    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        vector<vector<int> >ans;
        vector<int>res;
        set<vector<int> >s;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                res.push_back(M[i][j]);
            }
            if(!s.count(res)){
                ans.push_back(res);
            }
            s.insert(res);
            res.clear();
        }
        return ans;
    }

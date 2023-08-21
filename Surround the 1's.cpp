Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2780
Total Time Taken: 
0.65
Your Accuracy: 
50%
Attempts No.: 
2

    int dx[8] = {-1,-1,0,1,1,1,0,-1};
    int dy[8] = {0,1,1,1,0,-1,-1,-1};
    
    bool bfs(int row, int col, vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int count0 = 0;
        for (int i=0; i<8; i++)
        {
            int delRow = row + dx[i];
            int delCol = col + dy[i];
            if (delRow>=0 && delCol>=0 && delRow<n && delCol<m && matrix[delRow][delCol]==0) count0++;
        }
        if (count0%2==0 && count0>0) return true;
        return false;
    }
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size();
        int m = matrix[0].size();
        int count = 0;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                if (matrix[i][j]==0) continue;
                else 
                {
                    if (bfs(i, j, matrix)) count++;
                }
            }
        }
        
        return count;
    }

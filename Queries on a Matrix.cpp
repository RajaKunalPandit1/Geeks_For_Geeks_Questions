Output Status : 

Problem Solved Successfully
Test Cases Passed: 
262 /262
Total Points Scored: 
8 /8
Your Total Score: 
1410
Total Time Taken: 
0.3
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {

  public:
    vector<vector<int>> solveQueries(int n, vector<vector<int>> q) {
        
        
        vector<vector<int>> v(n,vector<int>(n,0));
        
        int qs = q.size();
        
        for(int i=0;i<q.size();i++){
            
            int x1 = q[i][0], x2 = q[i][2];
            int y1 = q[i][1], y2 = q[i][3];
            
            for(int j=x1;j<=x2;j++){
                
                v[j][y1]++;
                if(y2+1 < n){
                    v[j][y2+1]--;
                }
            }
        }
        
        
        int cnt = 0;
        
        for(int i=0;i<n;i++){
            cnt = 0;
            for(int j=0;j<n;j++){
                cnt += v[i][j];
                v[i][j] = cnt;
            }
        }
        return v;
    }
};

// Another Solution 

class Solution {
  public:
    vector<vector<int>> solveQueries(int n, vector<vector<int>> Queries) {
        vector<vector<int>> matrix(n + 2, vector<int>(n + 2, 0));
        vector<vector<int>> row(n + 2, vector<int>(n + 2, 0));
        vector<vector<int>> col(n + 2, vector<int>(n + 2, 0));
        for (auto i : Queries) {
            int a = i[0];
            int b = i[1];
            int c = i[2];
            int d = i[3];
            row[a][b]++;
            row[c + 1][b]--;
            col[a][d + 1]--;
            col[c + 1][d + 1]++;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                row[j][i] += row[j - 1][i];
                col[j][i] += col[j - 1][i];
            }
        }
        for (int i = 0; i < n; i++) {
            matrix[i][0] = row[i][0] + col[i][0];
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[j][i] += matrix[j][i - 1] + row[j][i] + col[j][i];
            }
        }
        vector<vector<int>> res(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) res[i][j] = matrix[i][j];
        return res;
    }
};

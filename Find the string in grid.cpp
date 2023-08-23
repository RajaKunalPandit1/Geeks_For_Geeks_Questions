Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2784
Total Time Taken: 
0.04
Your Accuracy: 
100%
Attempts No.: 
1

vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
              vector<vector<int>> result;
        int n = grid.size();
        int m = grid[0].size();
        
        int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == word[0]) {
                    for (int dir = 0; dir < 8; dir++) {
                        int x = i + dx[dir];
                        int y = j + dy[dir];
                        int k;
                        for (k = 1; k < word.size(); k++) {
                            if (x < 0 || x >= n || y < 0 || y >= m || grid[x][y] != word[k])
                                break;
                            x += dx[dir];
                            y += dy[dir];
                        }
                        if (k == word.size()) {
                            result.push_back({i, j});
                            break;
                        }
                    }
                }
            }
        }
        return result;
	 }

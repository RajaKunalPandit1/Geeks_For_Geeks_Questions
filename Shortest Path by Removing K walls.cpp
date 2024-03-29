Output Status : 

Problem Solved Successfully
Test Cases Passed: 
165 /165
Total Points Scored: 
8 /8
Your Total Score: 
1679
Total Time Taken: 
0.73
Your Accuracy: 
50%
Attempts No.: 
2

class Solution {
  public:
    int shotestPath(vector<vector<int>> arr, int n, int m, int k) {
        
        int row = arr.size();
        int col = arr[0].size();
        
         // This vector stores the number of obstacles that we can still remove after walking through that cell
        vector<vector<int>> visited(row, vector<int>(col, -1));
        
        queue<vector<int>> q;
             // x,   y, currentLength, remaining k
      //q.push({0,   0,         0,       k});
        
        q.push({0,0,0,k});
        
        while(q.empty() == false)
        {
            auto curr = q.front();
            q.pop();
            
            //indices in array
            int x = curr[0];
            int y = curr[1];
            
            // handling edge cases
            if(x < 0 || y < 0 || x >= row || y >= col)
                continue;
            
            // If you've reached the end, return the currentLength!
            if(x == row - 1 && y == col - 1)
                return curr[2];
            
             // If we hit an obstacle & we don't have any Ks remaining, continue
            // If we still have Ks to spend, we spend 1.
            if(arr[x][y] == 1)
                if(curr[3] > 0)
                    curr[3]--;
                else
                    continue;
            
             // If this cell is already visited with a K value lesser than this one, we would want to save Ks for future use, so we continue
            // This is the most important condition and part of the solution!
             if(visited[x][y] != -1 && visited[x][y] >= curr[3])
             {
                 continue;
             }
            
            // We store the currentRemaining K after spending K (if required) into the visited matrix.
            visited[x][y] = curr[3];
            
            // Push the adjacent nodes in the queue.
            q.push({x+1, y, curr[2]+1, curr[3]});
            q.push({x-1, y, curr[2]+1, curr[3]});
            q.push({x, y+1, curr[2]+1, curr[3]});
            q.push({x, y-1, curr[2]+1, curr[3]});
            
        }
        return -1;
    }
};

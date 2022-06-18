Output Status: 

Problem Solved Successfully 
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
 Test Cases Passed:
10 / 10
Total Time Taken:
0.01/1.02
Correct Submission Count:
2
Attempts No.:
2



class Solution {
public:
    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
       if(matrix[xs][ys] == 0 || matrix[xd][yd] == 0){
           return -1;
       }
       
       int ans = -1;
       findLongestPath(matrix,xs,ys,xd,yd,0,ans);
       return ans;
       
    }
    
    void findLongestPath(vector<vector<int>> matrix, int x, int y, int xd, int yd, int pathLength, int &ans){
        
        if(x == xd && y == yd){
            if(pathLength>ans){
                ans = pathLength;
            }
            return;
        }
        
        matrix[x][y] = 2;
        vector<pair<int,int>> neighbours = {{0,1},{0,-1},{1,0},{-1,0}};
        
        for(pair<int,int> neighbour : neighbours){
            
            int newx = neighbour.first + x;
            int newy = neighbour.second + y;
            
            if(newx>=0 && newy>=0 && newx<matrix.size() && 
               newy<matrix[0].size() && matrix[newx][newy] == 1){
                   findLongestPath(matrix,newx,newy,xd,yd,pathLength+1,ans);
               }
        }
        
        matrix[x][y] = 1;
    }
};

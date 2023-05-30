Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2378
Total Time Taken: 
0.05
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
public:
    
    int rows,cols;
    
    vector<vector<bool>> vis;
    
    bool search(int x,int y, string &word, int idx, vector<vector<char>> &board){
        
        if(x < 0 || x >= rows || y<0 || y>=cols || idx >= word.size()){
            return false;
        }
        
        if(vis[x][y]){
            return false;
        }
        
        if(word[idx] != board[x][y]){
            return false;
        }
        
        if(idx == word.size()-1 && word[idx] == board[x][y]){
            return true;
        }
        
        vis[x][y] = true;
        
        vector<int> xdir = {1,0,-1,0};
        vector<int> ydir = {0,1,0,-1};
        
        int ans = false;
        
        for(int i=0;i<4;i++){
            ans = ans || search(x+xdir[i],y+ydir[i],word,idx+1,board);
        }
        
        vis[x][y] = false;
        
        return ans;
    }

    bool isWordExist(vector<vector<char>>& board, string word) {
        
        rows = board.size();
        cols = board[0].size();
        
        vis.resize(rows,vector<bool>(cols));
        
        bool ans = false;
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                ans = ans || search(i,j,word,0,board);
            }
        }
        return ans;
    }
};

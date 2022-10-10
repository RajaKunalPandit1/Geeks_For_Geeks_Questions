Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1121 /1121
Total Points Scored: 
4 /4
Your Total Score: 
1456
Total Time Taken: 
0.2
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
  
    void dfs(int i, int j, int n, int m, vector<vector<int>> &temp){
        
        if(temp[i][j] != 1) return;
        
        temp[i][j] = -1;
        
        if(i-1>=0){
            dfs(i-1,j,n,m,temp);
        }
        if(i+1<n){
            dfs(i+1,j,n,m,temp);
        }
        if(j-1>=0){
            dfs(i,j-1,n,m,temp);
        }
        if(j+1<m){
            dfs(i,j+1,n,m,temp);
        }
    }
  
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &op) {
        
        vector<vector<int>> mat(n,vector<int>(m,0));
        
        vector<int> res;
        
        int cnt = 0;
        
        for(int i=0;i<op.size();i++){
            
            mat[op[i][0]][op[i][1]] = 1;
            
            vector<vector<int>> temp = mat;
            
            for(int j=0;j<n;j++){
                for(int k=0;k<m;k++){
                    
                    if(temp[j][k] == 1 && temp[j][k] != -1){
                        dfs(j,k,n,m,temp);
                        cnt++;
                    }
                }
            }
            
            res.push_back(cnt);
            temp.clear();
            cnt = 0;
        }
        return res;
    }
};

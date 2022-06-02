Output Status:

Problem Solved Successfully 
 Test Cases Passed:
200 / 200
Total Points Scored:
4/4
Total Time Taken:
0.02/1.02
Your Accuracy:
100%
Attempts No.:
1


class Solution{
public:
    
    bool withinBoundary(int i,int j,vector<vector<int>>&matrix){
        
        if(i>=matrix.size() || j>=matrix[0].size() || matrix[i][j] == 0){
            return false;
        }else{
            return true;
        }
    }
    
    bool ratmaze(vector<vector<int>>&matrix,vector<vector<int>>&res,int i,int j){
        
        if(i == matrix.size()-1 && j == matrix[0].size()-1){
            res[i][j] = 1;
            return true;
        }
        
        if(withinBoundary(i,j,matrix)){
            res[i][j] = 1;
            
            for(int k = 1;k<=matrix[i][j];k++){
                if(ratmaze(matrix,res,i,j+k)) return true;
                if(ratmaze(matrix,res,i+k,j)) return true;
                
            }
            res[i][j] = 0;
        }
        return false;
    }

	vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
	   
	   vector<vector<int>> res(matrix.size(),vector<int>(matrix[0].size(),0));
	
	   if(!ratmaze(matrix,res,0,0)){
	       return {{-1}};
	   }
	   return res;
	}
};

// Another Solution

class Solution {
public:
	bool isSafe(int x, int y, vector<vector<int>>&matrix){
		int n = matrix.size();
		return (x >= 0 and x < n and y >=0 and y < n and matrix[x][y] != 0);
	}
	bool helper(int x, int y, vector<vector<int>>&matrix, vector<vector<int>>&sol){
		int n = matrix.size();
		if(x == n-1 and y == n-1){
			sol[x][y] = 1;
			return true;
		}
		if(isSafe(x, y, matrix)){
			sol[x][y] = 1;
			for(int step = 1; step <= matrix[x][y] and step < n; step++){
				if(helper(x, y+step, matrix, sol))
					return true;
				if(helper(x+step, y, matrix, sol))
					return true;
			}
			sol[x][y] = 0;
			return false;
		}
		return false;
	}
	vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
		int  n = matrix.size();
		vector<vector<int>>sol(n, vector<int>(n, 0));
		helper(0, 0, matrix, sol);
		vector<vector<int>>ans;
		ans.push_back({-1});
		return sol[n-1][n-1] == 0 ? ans : sol;
	}

};

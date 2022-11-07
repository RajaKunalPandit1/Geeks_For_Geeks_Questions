Output Status : 

Problem Solved Successfully
Test Cases Passed: 
90 /90
Total Points Scored: 
4 /4
Your Total Score: 
1556
Total Time Taken: 
0.37
Your Accuracy: 
100%
Attempts No.: 
1
  
  
class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    
	    int n = matrix.size();
	    
	    for(int k=0;k<n;k++){
	        
	        for(int i=0;i<n;i++){
	            
	            for(int j=0;j<n;j++){
	                
	                if(i != j && i != k && j != k && matrix[i][k] != -1 && matrix[k][j] != -1){
	                    
	                    if(matrix[i][j] == -1){
	                        
	                        matrix[i][j] = matrix[i][k] + matrix[k][j];
	                    }
	                    matrix[i][j] = min(matrix[i][j],matrix[i][k] + matrix[k][j]);
	                }
	                
	            }
	            
	        }
	        
	    }
	    
	}
};

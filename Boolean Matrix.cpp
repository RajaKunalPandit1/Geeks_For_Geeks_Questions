Output Status:
Problem Solved Successfully 
Total Points Scored:
4/4
Total Time Taken:
1.0/2.6
Your Accuracy:
100%
Attempts No.:
1
  
//   Time: O(R*C) :: Aux_Space: O(R+C)
  
  class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        int r = matrix.size();
        int c = matrix[0].size();
        
        int row[r] = {0};
        int col[c] = {0};
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j] == 1){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(row[i] == 1 || col[j] == 1){
                    matrix[i][j] = 1;
                }
            }
        }
        
    }
};


// Another Solution 



class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        int R = matrix.size();
        int C = matrix[0].size();
        
        //using two list to keep track of the rows and columns 
        //that needs to be updated with 1.
        vector<int> row(R,0);
        vector<int> col(C,0);

        
        for(int i = 0; i < R; i++)
        {
            for(int j = 0; j < C; j++)
            {
                //if we get 1 in matrix, we mark ith row and jth column as 1.
                if(matrix[i][j] == 1){
                    row[i] = col[j] = 1;
                }
            }
        }

        for(int i = 0; i < R; i++)
        {
            for(int j = 0; j < C; j++)
            {
                //if ith row or jth column is marked as 1, then all elements
                //of matrix in that row and column will be 1.
                if(row[i] || col[j]){
                    matrix[i][j] = 1;
                }
            }
        }
    }
};

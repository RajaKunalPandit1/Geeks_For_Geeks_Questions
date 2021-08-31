Output Status:
Problem Solved Successfully 
Total Points Scored:
4/4
Total Time Taken:
0.0/1.0
Your Accuracy:
100%
Attempts No.:
1
  
  void rotate(vector<vector<int> >& matrix)
{
    int n = matrix.size();
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
    for(int i; i < n/2; i++)
    {
        for(int j = 0; j < n; j++)
        {
            swap(matrix[i][j], matrix[n-1-i][j]);
        }
    }
 
}

// Another Solution

void rotate(vector<vector<int> >& matrix)
{
    int n = matrix.size();
    
    for (int i = 0; i < n/2; ++i)
    {
        for(int j=i; j<n-i-1; j++)
        {
            // swap in anti-clockwise direction
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][n-1-i];        // right to top
            matrix[j][n-1-i] = matrix[n-1-i][n-1-j];// bottom to right
            matrix[n-1-i][n-1-j] = matrix[n-1-j][i];// left to bottom
            matrix[n-1-j][i] = temp;                // top to left
        }
    }
}



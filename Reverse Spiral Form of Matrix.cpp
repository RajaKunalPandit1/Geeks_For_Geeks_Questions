Output Status : 

Problem Solved Successfully
Test Cases Passed: 
104 /104
Total Points Scored: 
4 /4
Your Total Score: 
1498
Total Time Taken: 
0.07
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    vector<int> reverseSpiral(int R, int C, vector<vector<int>>&a)  {
        
        vector<int> res;
        
        int i=0,j=0,startRow = 0,startCol = 0,endRow = R,endCol = C;
        
        while(startRow < endRow && startCol < endCol){
            
            for(int i=startCol,j=startCol;j<=endCol-1;j++){

                res.push_back(a[i][j]);
            }
            startRow++;

            for(int i=startRow,j=endCol-1;i<=endRow-1;i++){

                res.push_back(a[i][j]);

            }
            endCol--;

            if(startRow<endRow)

            {

                for(int i=endRow-1,j=endCol-1;j>=startCol;j--){

                    res.push_back(a[i][j]);

                }   
                endRow--;
            }

            if(startCol<endCol){

                for(int i=endRow-1,j=startCol;i>=startRow;i--){

                    res.push_back(a[i][j]);

                }

                startCol++;
            }
        }
        
        reverse(res.begin(),res.end());
        return res;
        
    }
};

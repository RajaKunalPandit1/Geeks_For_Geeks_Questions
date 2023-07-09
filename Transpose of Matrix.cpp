Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1121 /1121
Your Total Score: 
2673
Total Time Taken: 
0.21
Correct Submission Count: 
5
Attempts No.: 
11

void transpose(vector<vector<int> >& matrix, int n)
    { 
        
        for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }

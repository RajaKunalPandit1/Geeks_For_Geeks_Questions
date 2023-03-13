Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1023 /1023
Total Points Scored: 
2 /2
Your Total Score: 
2049
Total Time Taken: 
1.34
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
public:

vector<int> findMaxRow(vector<vector<int>> mat, int N) {

    int max = 0, count = 0, index = 0;

    for (int i = 0; i < N; i++){
      for (int j = 0; j < N; j++)
      {
        if (mat[i][j] == 1)
        {
          count++;

        }
      }

      if (count > max){
          
        max = count;
        index = i;
      }
      count = 0;
    }

    vector<int> ans;

    ans.push_back(index);
    ans.push_back(max);
    
    return ans;
    }

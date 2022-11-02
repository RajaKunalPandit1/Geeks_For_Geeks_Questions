Output Status : 

Problem Solved Successfully
Test Cases Passed: 
100120 /100120
Total Points Scored: 
4 /4
Your Total Score: 
1540
Total Time Taken: 
0.53
Your Accuracy: 
100%
Attempts No.: 
1

class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            vector<int> row,col;
            row.push_back(0);
            col.push_back(0);
            for(auto &v:enemy){
                row.push_back(v[0]);
                col.push_back(v[1]);
            }
            row.push_back(n+1);
            col.push_back(m+1);
            sort(row.begin(),row.end());
            sort(col.begin(),col.end());
            int row_mx = 0,col_mx = 0;
            for(int i=1;i<row.size();i++){
                row_mx = max(row_mx,row[i]-row[i-1]-1);
                col_mx = max(col_mx,col[i]-col[i-1]-1);
            }
            return row_mx*col_mx;
        }
};

Output Status : 

Runtime
0 ms
Beats
100%
Memory
9.5 MB
Beats
52.82%

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int x) {
        
        int row = mat.size();
        int col = mat[0].size();

        int low = 0,high = (row*col) - 1;

        while(low <= high){

            int mid = (low + high) >> 1;

            int r = mid/col,c = mid%col;

            if(mat[r][c] == x){
                return true;
            }else if(mat[r][c] > x){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return false;
    }
};

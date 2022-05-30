Output Status: 

Problem Solved Successfully 
 Test Cases Passed:
246 / 246
Total Points Scored:
2/2
Total Time Taken:
0.39/2.82
Your Accuracy:
25%
Attempts No.:
4


class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    
	    int i = 0, j = M-1;
	    
	    while(i<N && j>=0){
	        
	        if(mat[i][j] == X){
	            return 1;
	        }else if(mat[i][j] < X){
	            i++;
	        }else{
	            j--;
	        }
	    }
	    return 0;
	}
};

// Another Solution 

class Solution{
public:
	int matSearch (vector <vector <int>> &arr, int n, int m, int x)
	{
	    int r = 0, c = m - 1;
	    while (r < n and c >= 0)
	    {
	        if (arr[r][c] == x) return 1;
	        if (arr[r][c] > x) c--;
	        else r++;
	    }
	    return 0;
	}
};

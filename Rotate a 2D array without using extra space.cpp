Output Status : 

Problem Solved Successfully
Test Cases Passed: 
110 /110
Total Points Scored: 
4 /4
Your Total Score: 
2293
Total Time Taken: 
0.37
Your Accuracy: 
100%
Attempts No.: 
1

// Naive Solution :: Time : O(N*N) :: Aux-Space : O(N*N)

class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& arr, int n) {
	    
	    vector<vector<int>> temp(n,vector<int>(n));
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            
	            temp[n-j-1][i] = arr[i][j];
	        }
	    }
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            arr[i][j] = temp[i][j];
	        }
	    }
	}
};

// Efficient Approach :: Time : O(N*N) :: Aux_Space : O(1)

class Solution{
public:	
	
	void rotateMatrix(vector<vector<int>>& arr, int n) {
	    
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            swap(arr[i][j],arr[j][i]);
	        }
	    }
	    
	    for(int i=0;i<n;i++){
	        
	        int low =0,high = n-1;
	        
	        while(low<high){
	            swap(arr[low][i],arr[high][i]);
	            low++,high--;
	        }
	    }
	}
};

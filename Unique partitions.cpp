Output Status : 

Problem Solved Successfully
Test Cases Passed: 
25 /25
Total Points Scored: 
4 /4
Your Total Score: 
1619
Total Time Taken: 
0.02
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
	public:
	vector<vector<int>> res;
	
	void dfs(int i, vector<int> &b){
	    
	    if(i == 0){
	        res.push_back(b);
	        return;
	    }
	    for(int j=0;j<i;j++){
	        if(b.empty() || i-j <= b.back()){
	            b.push_back(i-j);
	            dfs(j,b);
	            b.pop_back();
	        }
	    }
	    
	}
	
    vector<vector<int>> UniquePartitions(int n) {
        
        vector<int> b;
        dfs(n,b);
        return res;
        
    }
};

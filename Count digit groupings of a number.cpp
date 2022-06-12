Output Status: 

Problem Solved Successfully 
 Test Cases Passed:
230 / 230
Total Points Scored:
4/4
Total Time Taken:
0.29/1.48
Your Accuracy:
50%
Attempts No.:
2

// Recursive Sol

class Solution {

	public:
	
	int grouping(string str, int index, int sum){
	    
	    int curr_sum = 0;
	    int ans = 0;
	    
	    if(index == str.length()){
	        return 1;
	    }
	    
	    for(int i = index;i<str.length();i++){
	        
	        curr_sum += str[i]-'0';
	        if(curr_sum >= sum){
	            ans += grouping(str,i+1,curr_sum);
	        }
	        
	        
	    }
	    return ans;
	}
	
	int TotalCount(string str){
	  return grouping(str,0,0);  
	}
};


// DP Sol


class Solution {
  
  	public:
	vector<vector<int>> dp;
	int grouping(string str, int index, int sum){
	    
	    int curr_sum = 0;
	    int ans = 0;
	    
	    int n = str.length();
	    
	    if(index == str.length()){
	        return 1;
	    }
	    
	    if(dp[index][sum] != -1){
	        return dp[index][sum];
	    }
	    
	    for(int i = index;i<str.length();i++){
	        
	        curr_sum += str[i]-'0';
	        if(curr_sum >= sum){
	            ans += grouping(str,i+1,curr_sum);
	        }
	        
	        
	    }
	    return dp[index][sum] = ans;
	}
	
	int TotalCount(string str){
	    int n = str.length();
	    dp.resize(n,vector<int>(9*n,-1));
	  return grouping(str,0,0);  
	}

};

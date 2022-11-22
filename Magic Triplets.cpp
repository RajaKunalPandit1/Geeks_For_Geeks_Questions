Output Status : 

Problem Solved Successfully
Test Cases Passed: 
140 /140
Total Points Scored: 
4 /4
Your Total Score: 
1627
Total Time Taken: 
0.08
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
	public:
	int countTriplets(vector<int>nums){
	    
	    int res = 0;
	    
	    for(int j=0;j<nums.size();j++){
	        
	        int small = 0;
	        
	        for(int i=0;i<j;i++){
	            if(nums[i] < nums[j]){
	                small++;
	            }
	        }
	    
	        int large = 0;
	        
	        for(int k = j+1;k<nums.size();k++){
	            
	            if(nums[j] < nums[k]){
	                large++;
	            }
	        }
	        res += (small*large);
	    }
	    return res;
	}
};

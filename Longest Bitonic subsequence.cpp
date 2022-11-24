Output Status :

Problem Solved Successfully
Test Cases Passed: 
330 /330
Total Points Scored: 
4 /4
Your Total Score: 
1633
Total Time Taken: 
0.27
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	    int n = nums.size();
	    vector<int> dp1(n),dp2(n);
	    
	    int maxi = 1;
	    
	    for(int i=0;i<n;i++){
	        dp1[i] = 1;
	        for(int j=0;j<i;j++){
	            if(nums[i] > nums[j] && dp1[i] < 1+dp1[j]){
	                dp1[i] = 1 + dp1[j];
	            }
	        }
	    }
	    
	    for(int i=n-1;i>=0;i--){
	        
	        dp2[i] = 1;
	        for(int j=n-1;j>i;j--){
	            
	            if(nums[i] > nums[j] && dp2[i] < 1+dp2[j]){
	                dp2[i] = 1+dp2[j];
	            }
	        }
	        maxi = max(maxi,dp1[i] + dp2[i]-1);
	    }
	    return maxi;
	}
};

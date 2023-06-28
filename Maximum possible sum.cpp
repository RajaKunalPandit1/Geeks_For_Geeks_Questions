Output Status : 


Problem Solved Successfully
Test Cases Passed: 
360 /360
Total Points Scored: 
2 /2
Your Total Score: 
2617
Total Time Taken: 
1.07
Your Accuracy: 
33%
Attempts No.: 
3

class Solution {


	public:
	long int returnMaxSum(int arr[], int brr[], int n)
	{
	   
	   long int res = INT_MIN,cnt = 0,i=0,j=0;
	   
	   unordered_map<long int,long int> mp;
	   
	   while(i < n){
	       
	       while(i<n && mp.find(arr[i]) == mp.end()){
	           cnt += brr[i];
	           mp[arr[i]] = i;
	           i++;
	       }
	       
	       res = max(res,cnt);
	       
	       int k = mp[arr[i]];
	       
	       while(i < n && j <= k){
	           
	           cnt -= brr[j];
	           mp.erase(arr[j]);
	           j++;
	       }
	   }
	   return res;
	}

};

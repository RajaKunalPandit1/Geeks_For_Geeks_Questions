Output Status : 

Problem Solved Successfully
Test Cases Passed: 
530 /530
Total Points Scored: 
1 /1
Your Total Score: 
1247
Total Time Taken: 
0.85
Your Accuracy: 
100%
Attempts No.: 
1


class Solution {
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		
		if(n == 1) return 0;
		
		set<int> s;
		
		for(int i=0;i<n;i++){
		    s.insert(arr[i]);
		}
		
		int sum = 0;
		
		for(int i=A;i<=B;i++) sum += i;
		
		for(auto x: s){
		    if(x>= A && x<=B){
		        sum -= x;
		    }
		}
		return (sum == 0);
	}

};

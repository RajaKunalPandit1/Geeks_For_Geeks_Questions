Output Status : 

Problem Solved Successfully
Test Cases Passed: 
276 /276
Total Points Scored: 
4 /4
Your Total Score: 
1859
Total Time Taken: 
0.96
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    
	   map<int,int> mp;
	   vector<int> res(n,0);
	   
	   for(int i=0;i<n;i++){
	       res[i] = arr[i];
	   }
	   
	   sort(res.begin(),res.end());
	   
	   int idx = 0;
	   
	   for(int i=0;i<n;i++){
	        mp.insert({res[i],idx});
	        idx++;
	   }
	   
	   for(int i=0;i<n;i++){
	       int temp = mp[arr[i]];
	       arr[i] = temp;
	   }
	   
	}
};

// Another Solution 

class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    
	    map<int,int> mp;
	    
	    for(int i=0;i<n;i++){
	        mp[arr[i]] = i;
	    }
	    
	    int cnt = 0;
	    for(auto it:mp){
	        arr[it.second] = cnt;
	        cnt++;
	    }
	    
	}
};

Output Status : 

Problem Solved Successfully 
 Test Cases Passed:
187 / 187
Total Points Scored:
2/2
Total Time Taken:
0.97/2.2
Your Accuracy:
100%
Attempts No.:
1

class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    
	    unordered_map<int,int> mp;
	    
	    for(int i=0;i<n;i++){
	        int var = x-arr[i];
	        if(mp.find(var) != mp.end()){
	            return true;
	        }else{
	            mp[arr[i]] = arr[i];
	        }
	    }
	    return false;
	}
};

// Another Solution :: 


class Solution{
public:
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    unordered_map<int, int> hash;
    	for (int i = 0; i < n; i++) {
    		int numberToFind = x - arr[i];
                //if numberToFind is found in map, return them
    		if (hash.find(numberToFind) != hash.end()) {
    		    return true;
    		}
                //number was not found. Put it in the map.
    		hash[arr[i]] = i;
    	}
    	return false;
	}
};

Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.1/2.1
Your Accuracy:
50%
Attempts No.:
2

class Solution{
  public:
    //Function to return list containing all the pairs having both
    //negative and positive values of a number in the array.
    vector <int> findPairs(int arr[], int n) 
    {
        vector<int> res;

        unordered_map<int,int> m;
        
        for(int i=0;i<n;i++){
            if(m.find(-(arr[i]))!= m.end()){
                res.push_back(-abs(arr[i]));
                res.push_back(abs(arr[i]));
            }else{
                m[arr[i]];
            }
        }
        return res;
    }
};

// Another Solution 

class Solution{
  public:
    //Function to return list containing all the pairs having both
    //negative and positive values of a number in the array.
    vector <int> findPairs(int arr[], int n) 
    { 
    	vector<int> result; 
    	//using map to store the count of absolute value of numbers.
    	unordered_map<int, int> ump; 
    
        //iterating over the array.
    	for (int i = 0; i < n; i++) { 
    	    
    	    //if the count of absolute value of current element is 0 in
    	    //map, we store that element in map with 1 as count.
    		if (ump[abs(arr[i])] == 0) {
    			ump[abs(arr[i])] = 1; 
    		}
            //else the absolute value of current element is present twice 
            //so the pair of positive and negative number is present.
    		else { 
    		    
    		    //we store the pair in the list.
    			result.push_back((-1)*abs(arr[i])); 
    			result.push_back(abs(arr[i])); 
    			ump[abs(arr[i])] = 0; 
    		} 
    	} 
    	//returning the list.
    	return result;
    }
};

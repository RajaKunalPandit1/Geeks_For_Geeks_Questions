Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.3/1.5
Your Accuracy:
50%
Attempts No.:
2
  
  class Solution{
public:	
	// Returns count buildings that can see sunlight
	int countBuildings(int h[], int n) {
	    
	    int res=1;
	    int curr_max = h[0];
	    
	    for(int i=1;i<n;i++){
	        if(h[i]>curr_max){
	            curr_max = h[i];
	            res++;
	        }
	    }
	    return res;
	    
	}
};

// Another Solution 

class Solution{
public:
	// Returns count buildings that can see sunlight
	int countBuildings(int h[], int n) {
	    // Initialize result (Note that first building
	    // always sees sunlight)
	    int count = 1;

	    // Start traversing element
	    int curr_max = h[0];
	    for (int i = 1; i < n; i++) {
	        // If curr_element is maximum,
	        // update maximum and increment count
	        if (h[i] > curr_max) {
	            count++;
	            curr_max = h[i];
	        }
	    }

	    return count;
	}


}

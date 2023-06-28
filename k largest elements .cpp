Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1115 /1115
Your Total Score: 
2617
Total Time Taken: 
0.37
Correct Submission Count: 
10
Attempts No.: 
19

	vector<int> kLargest(int arr[], int n, int k) {
	    
	    vector<int> res;
	    
	    priority_queue<int,vector<int>,greater<int>> pq;
	    
	    for(int i=0;i<k;i++){
	        pq.push(arr[i]);
	    }
	    
	    for(int i=k;i<n;i++){
	        
	        if(pq.top() < arr[i]){
	            pq.pop();
	            pq.push(arr[i]);
	        }
	    }
	    
	    while(!pq.empty()){
	        
	        res.push_back(pq.top());
	        pq.pop();
	        
	    }
	    reverse(res.begin(),res.end());
	    return res;
	}

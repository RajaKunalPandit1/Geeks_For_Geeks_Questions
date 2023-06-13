Output Status :

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1115 /1115
Your Total Score: 
2457
Total Time Taken: 
0.32
Correct Submission Count: 
9
Attempts No.: 
18


	vector<int> kLargest(int arr[], int n, int k) {
	    
	    vector<int> res;
	    
	    priority_queue<int> q;
	    
	    for(int i=0;i<n;i++){
	        q.push(arr[i]);
	    }
	    
	    while(k--){
	        res.push_back(q.top());
	        q.pop();
	    }
	    return res;
	}

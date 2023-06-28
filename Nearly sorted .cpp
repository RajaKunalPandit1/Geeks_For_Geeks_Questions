Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
160 /160
Your Total Score: 
2615
Total Time Taken: 
0.89
Correct Submission Count: 
2
Attempts No.: 
2

      vector <int> nearlySorted(int arr[], int n, int k){
        
        vector<int> res(n,1);
        int idx = 0;
        
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(int i=0;i<=k;i++){
            pq.push(arr[i]);
        }
        
        for(int i=k+1;i<n;i++){
            res[idx++] = pq.top();
            pq.pop();
            pq.push(arr[i]);
        }
        
        while(!pq.empty()){
            res[idx++] = pq.top();
            pq.pop();
        }
        return res;
    }

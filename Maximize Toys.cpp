Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
41 /41
Your Total Score: 
2615
Total Time Taken: 
0.47
Correct Submission Count: 
3
Attempts No.: 
6

    int toyCount(int n, int k, vector<int> arr)
    {
        
        sort(arr.begin(),arr.end());
        
        int res = 0;
        
        for(int i=0;i<n;i++){
            
            if(arr[i] <= k){
                res++;
                k -= arr[i];
            }else{
                break;
            }
        }
        
        return res;
        
    }

// Sol Using Heap

    int toyCount(int n, int k, vector<int> arr)
    {
        
        priority_queue<int,vector<int>,greater<int>> pq (arr.begin(),arr.end());
        
        int res = 0;
        
        while(!pq.empty() && k >= pq.top()){
            res++;
            k -= pq.top();
            pq.pop();
        }
        return res;
    }

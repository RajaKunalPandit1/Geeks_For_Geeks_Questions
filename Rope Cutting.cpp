Output Status : 

Suggest Feedback
Problem Solved Successfully
Test Cases Passed: 
200 /200
Total Points Scored: 
2 /2
Your Total Score: 
2689
Total Time Taken: 
0.35
Your Accuracy: 
100%
Attempts No.: 
1

    vector<int> RopeCutting(int arr[], int n){
        
        vector<int> res;
        
        sort(arr,arr+n);
        int cnt = 0;
        
        if(n == 1) return {0};
        
        for(int i=1;i<n;i++){
            
            if(arr[i] != arr[i-1]){
                cnt = n-i;
                res.push_back(cnt);
            }
        }
        
        if(cnt == 0) return {0};
        return res;
    }

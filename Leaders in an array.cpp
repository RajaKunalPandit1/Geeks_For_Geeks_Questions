Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2778
Total Time Taken: 
0.42
Correct Submission Count: 
2
Attempts No.: 
8

    vector<int> leaders(int a[], int n){
        vector<int>ans;
        
        
        int maxi = a[n-1];
        ans.push_back(maxi);
        for(int i = n-2;i>=0;i--){
            if(a[i]>=maxi){
                ans.push_back(a[i]);
                maxi = a[i];
            }
            
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }

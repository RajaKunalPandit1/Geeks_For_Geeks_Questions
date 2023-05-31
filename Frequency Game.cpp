Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2380
Total Time Taken: 
0.79
Correct Submission Count: 
2
Attempts No.: 
2

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        int f = INT_MAX;
        int res = INT_MIN;
        
        for(auto it: mp){
            f = min(f,it.second);
        }
        
        for(auto it: mp){
            if(it.second == f){
                res = max(res,it.first);
            }
        }
        return res;
    }
};

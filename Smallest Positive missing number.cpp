Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2673
Total Time Taken: 
0.3
Correct Submission Count: 
3
Attempts No.: 
7

// Naive Sol :: Time : O(N) :: Aux_Space : O(N)


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        for(int i=1;i<=n;i++){
            if(mp[i] == 0){
                return i;
            }
        }
        return n+1;
    } 
};

// Efficient Sol :: Time : O(N) :: Aux_Space : O(1)

    int missingNumber(int arr[], int n) 
    { 
        
        for(int i=0;i<n;i++){
            
            int ele = arr[i];
            
            if(ele >= 0 && ele <= n){
                int pos = ele-1;

                if(arr[pos] != ele){
                    swap(arr[pos],arr[i]);
                    i--;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            if(arr[i] != i+1){
                return i+1;
            }
        }
        return n+1;
    } 

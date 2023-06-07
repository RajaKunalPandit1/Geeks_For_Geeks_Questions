Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1620 /1620
Total Points Scored: 
2 /2
Your Total Score: 
2409
Total Time Taken: 
0.09
Your Accuracy: 
50%
Attempts No.: 
2

// Naive Solution :: Time : O(NlogN) + O(N^2) :: Aux_Space : O(1)

class Solution {
    public:
    vector<pair<int,int>> allPairs(int arr[], int brr[], int n, int m, int x)
    {
        
        vector<pair<int,int>> res;
        
        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                
                if(arr[i] + brr[j] == x){
                    res.push_back({arr[i],brr[j]});
                }
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};

// Another Sol : 

class Solution {
    public:
       vector<pair<int,int>> allPairs(int a[], int b[], int n, int m, int x)
    {
        // Your code goes here 
        vector<pair<int,int>> ans;
        sort(a,a+n);
        sort(b,b+m);
        int i=0,j=m-1;
        while(i<n&&j>=0){
            if(a[i]+b[j]==x){
                ans.push_back({a[i],b[j]});
                i++;
                j--;
            }
            else if(a[i]+b[j]>x)j--;
            else 
            i++;
        }
        return ans;
    }
};

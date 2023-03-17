Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1112 /1112
Total Points Scored: 
2 /2
Your Total Score: 
2071
Total Time Taken: 
0.15
Your Accuracy: 
100%
Attempts No.: 
1

long long int no_of_subarrays(int n, vector<int> &arr) {
    
     long long int ans = 0, l = 0, r = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0) r++;
        else
        {
            int val = r-l;
            ans +=  (val * (val + 1) / 2);
            l = r;
        }
    }

    ans += ((r-l) * (r-l+1)/2);
    return ans;
  }
};

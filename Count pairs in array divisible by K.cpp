Output Status : 

Problem Solved Successfully 
 Test Cases Passed:
72 / 72
Total Points Scored:
4/4
Total Time Taken:
0.63/1.8
Your Accuracy:
25%
Attempts No.:
4


class Solution
{
    public:
    long long countKdivPairs(int arr[], int n, int K)
    {
        unordered_map<int,int> mp;
        long res = 0;
        
        for(int i=0;i<n;i++){
            long rem1 = arr[i]%K;
            
            if(rem1!=0){
                res += mp[K-arr[i]%K];
            }else{
                res += mp[0];
            }
            mp[rem1]++;
        }
        return res;
    }
};

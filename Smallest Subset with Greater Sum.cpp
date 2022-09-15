Output Status :

Problem Solved Successfully
Test Cases Passed: 
1451 /1451
Total Points Scored: 
2 /2
Your Total Score: 
1376
Total Time Taken: 
0.21
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
       sort(Arr.begin(), Arr.end());
        long long ans = 0, cur = 0;
        for(int i = 0; i < N; i++)
        {
            ans += Arr[i];
        }
        int count = 0;
        for(int i = N - 1; i >= 0; i--)
        {
            count++;
           if(Arr[i] + cur > (ans - Arr[i]))
           {
               break;
           }
           ans -= Arr[i];
           cur += Arr[i];
        }
        return count;
    }
};

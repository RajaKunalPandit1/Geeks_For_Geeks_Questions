Output Status :

Problem Solved Successfully
Test Cases Passed: 
206 /206
Total Points Scored: 
4 /4
Your Total Score: 
1759
Total Time Taken: 
0.04
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
  public:
  long long int wineSelling(vector<int>& Arr, int N){
      
        long long int sum = 0;

        for(int i=0;i<N;i++){
            sum += Arr[i];
        }

        long long int ans = 0;
        long long int curr = 0;

        for(int i=0;i<N;i++){
            curr += Arr[i];
            ans += abs(curr);
        }
        return ans;
  }
};

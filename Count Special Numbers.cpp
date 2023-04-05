Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1114 /1114
Total Points Scored: 
4 /4
Your Total Score: 
2139
Total Time Taken: 
0.27
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    int countSpecialNumbers(int n, vector<int> arr) {
        sort(arr.begin(),arr.end());
        unordered_set<int> m;
        int answer=0;
        
        for(int i=0;i<n;i++)
        {
            if(m.find(arr[i])!=m.end())
            {
                answer++;
            }
            else
            {
                if(i+1<n && arr[i]==arr[i+1]) answer++;
                int k=arr[i];
                for(int j=arr[i];j<=arr[n-1];j=j+k)
                {
                    m.insert(j);
                }
            }
        }
        return answer;
    }
};

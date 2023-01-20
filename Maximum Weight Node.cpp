Output Status : 

Problem Solved Successfully
Test Cases Passed: 
263 /263
Total Points Scored: 
2 /2
Your Total Score: 
1843
Total Time Taken: 
0.31
Your Accuracy: 
100%
Attempts No.: 
1

class Solution
{
  public:
  int maxWeightCell(int N, vector<int> Edge)
  {
      vector<int>weight(N,0);
       for(int i=0;i<N;i++)
       {
            if(Edge[i]!=-1)
            {
                weight[Edge[i]]+=i;
            }
       }
       int mx=INT_MIN;
       int ans=0;
       for(int i=0;i<N;i++)
       {
            if(weight[i]>=mx)
            {
                 ans=i;
                 mx=weight[i];
            }
          
       }
       return ans;

  }
};

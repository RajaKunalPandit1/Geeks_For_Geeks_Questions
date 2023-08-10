Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2754
Total Time Taken: 
0.25
Correct Submission Count: 
2
Attempts No.: 
4


class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
int lcs(int n, int m, string s1, string s2)
    {
        int A[n+1][m+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<m+1;j++)
            {
                if(i==0 || j==0)
                A[i][j]=0;
            }
        }
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<m+1;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    A[i][j]=1+A[i-1][j-1];
                }
                else
                {
                    A[i][j]=max(A[i-1][j],A[i][j-1]);
                }
            }
        }
        
        return A[n][m];
    }
};

Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2413
Total Time Taken: 
0.59
Your Accuracy: 
100%
Attempts No.: 
1

class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        
        string nums = "";
        
        for(int i=1;i<=n;i++){
            nums += to_string(i);
        }
        
        while(k > 1){
            next_permutation(nums.begin(),nums.end());
            k--;
        }
        return nums;
        
    }

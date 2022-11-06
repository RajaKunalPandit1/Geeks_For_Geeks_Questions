Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
104 /104
Your Total Score: 
1552
Total Time Taken: 
0.01
Correct Submission Count: 
3
Attempts No.: 
3

class Solution{
public:
    vector<int> minPartition(int n)
    {
        int curr[10] = {1,2,5,10,20,50,100,200,500,2000};
        int k = 9;
        
        vector<int> res;
        
        while(n != 0){
            
            while(n>=curr[k]){
                res.push_back(curr[k]);
                n  -= curr[k];
            }
            k--;
        }
        return res;
    }
};

Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
2 /2
Your Total Score: 
2287
Total Time Taken: 
0.17
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {

  public:
    int arrayOperations(int n, vector<int> &arr) {
        
        vector<int>temp;
        int x = 0, c = 0;
        
        for(int i=0; i<n; i++)
        {
            if(!arr[i])
            {
                x++;
                if(temp.size()) c++;
                temp.clear();
            }
            else
            {
                temp.push_back(arr[i]);
            }
        }
        
        if(temp.size()) c++;
        
        if(!x) return -1;
        return c;
        
    }
};


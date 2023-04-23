Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1117 /1117
Total Points Scored: 
2 /2
Your Total Score: 
2211
Total Time Taken: 
0.73
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    int minimumNumber(int n,vector<int> &arr){
        
        int odd = 0;
        for(int i=0;i<n;i++){
            if(arr[i]%2 != 0){
                odd = 1;
            }
        }
        
        if(odd == 1){
            return 1;
        }
        return *min_element(arr.begin(),arr.end());
    }
};

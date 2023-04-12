Output Status : 

Suggest Feedback

Problem Solved Successfully
Test Cases Passed: 
10115 /10115
Total Points Scored: 
2 /2
Your Total Score: 
2165
Total Time Taken: 
0.21
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        
        sort(arr.begin(),arr.begin()+(n/2));
        sort(arr.begin() + (n/2), arr.end());
        
        int res = 0;
        int i=0,j=n/2;
        
        while(i<n/2 && j<n){
            
            if(arr[i] >= 5*arr[j]){
                res += (n/2)-i;
                j++;
            }else{
                i++;
            }
        }
       return res;
    }  
};

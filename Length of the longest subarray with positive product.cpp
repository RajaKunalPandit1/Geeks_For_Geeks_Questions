Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1065 /1065
Total Points Scored: 
4 /4
Your Total Score: 
1913
Total Time Taken: 
0.27
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int n){
           
           int posLen = 0,negLen = 0,maxLen = 0;
           
           for(int i:arr){
               
               if(i == 0){
                   posLen = 0;
                   negLen = 0;
               }else{
                   if(i<0){
                       swap(posLen,negLen);
                   }
                   if(posLen > 0 ||i>0){
                       ++posLen;
                   }
                   if(negLen > 0 || i<0){
                       ++negLen;
                   }
                   maxLen = max(maxLen,posLen);
               }
           }
           return maxLen;
        }
 };

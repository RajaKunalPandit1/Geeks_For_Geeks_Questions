Output Status : 

Problem Solved Successfully
Test Cases Passed: 
220 /220
Total Points Scored: 
4 /4
Your Total Score: 
1464
Total Time Taken: 
0.13
Your Accuracy: 
25%
Attempts No.: 
4

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          
          
          unordered_map<char,int> mp;
          
          for(int i=0;i<n;i++){
              mp[x[i]] = b[i];
          }
          
          int res = 0,maxRes = INT_MIN;
          int start = 0,s=0,end = 0;
          
          for(int i=0;i<w.length();i++){
              
              if(mp.find(w[i]) != mp.end()){
                  res += mp[w[i]];
              }else{
                  res += int(w[i]);
              }
              
              if(maxRes < res){
                    maxRes = res;
                    start = s;
                    end = i;
              }
              
              if(res < 0){
                  res = 0;
                  s = i+1;
              }
          }
          return w.substr(start,end-start+1);
      }

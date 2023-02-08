Output Status : 

Problem Solved Successfully
Test Cases Passed: 
162 /162
Total Points Scored: 
2 /2
Your Total Score: 
1915
Total Time Taken: 
0.92
Your Accuracy: 
50%
Attempts No.: 
2

class Solution{
    #define ll long long int
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      
      unordered_set<int> row;
      unordered_set<int> col;
      
      vector<ll> res(k,0);
   
      ll total_zero = n*n;
      
      ll total_one,r,c;
      
      for(int i=0;i<k;i++){
          
          row.insert(arr[i][0]);
          col.insert(arr[i][1]);
          r = row.size();
          c = col.size();
          total_one = ((r+c)*n) - (r*c);
          res[i] = total_zero - total_one;
      }
      return res;
  }
};

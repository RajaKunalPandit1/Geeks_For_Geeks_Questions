Output Status:


Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.3/1.5
Your Accuracy:
100%
Attempts No.:
1
  
  
//   Naive Solution Using Hash Map: Time: O(N) :: Aux_Space: O(N)

 

class Solution{   
public:
   int getOddOccurrence(int arr[], int n) {
      
      unordered_map<int,int> m;
      for(int i=0;i<n;i++){
          m[arr[i]]++;
      }
      
      int res = -1;
      for(auto x:m){
          if(x.second%2!=0){
              res = x.first; 
          }
      }
      return res;
      
   }
};


// Efficient Solution Using XoR Operation, Time: O(N) :: Aux_Space: O(1)

class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
       
       int res = arr[0];
       
       for(int i=1;i<n;i++){
           res ^= arr[i];
       }
       return res;
    }
};

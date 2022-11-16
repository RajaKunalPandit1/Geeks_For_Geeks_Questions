Output Status : 

Problem Solved Successfully
Test Cases Passed: 
2102 /2102
Total Points Scored: 
4 /4
Your Total Score: 
1592
Total Time Taken: 
1.95
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    int beautySum(string s) {
        
        int n = s.length();
           int count = 0;

       vector<vector<char>> v;
       for(int i = 0; i < n;i++){

           unordered_map<char,int> mp;

           for(int j = i;j<n;j++)

           {

               mp[s[j]]++;
               int max = -1;
               int min = 99999;
               if(mp.size()>1){

                   for(auto x:mp){

                       if(x.second > max )  max = x.second;

                        if(x.second < min)  min = x.second;

                   }
                  count += (max - min);
             }  
           }
       }
       return count;
        
    }
};

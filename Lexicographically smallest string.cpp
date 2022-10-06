Output Status : 

Problem Solved Successfully
Test Cases Passed: 
991 /991
Total Points Scored: 
4 /4
Your Total Score: 
1442
Total Time Taken: 
1.51
Your Accuracy: 
100%
Attempts No.: 
1


class Solution {
  public:
    string lexicographicallySmallest(string s, int k) {
        
        int n = s.length();
        
        if((n&(n-1)) == 0){
            k = k/2;
        }else{
            k = k*2;
        }
        
        string res;
        
        for(int i=0;i<n;i++){
            
            while(res != "" && res.back() > s[i] && k>0){
                res.pop_back();
                k--;
            }
            res.push_back(s[i]);
        }
        
        while(res != "" && k>0){
            res.pop_back();
            k--;
        }
        if(res == ""){
            return "-1";
        }
        return res;
    }
};

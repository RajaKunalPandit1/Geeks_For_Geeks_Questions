Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1200 /1200
Total Points Scored: 
4 /4
Your Total Score: 
1300
Total Time Taken: 
0.03
Your Accuracy: 
50%
Attempts No.: 
2


class Solution {
  public:
    string findSum(string X, string Y) {
        
        int n = X.length()-1,m = Y.length()-1;
        
        
        int carry =0,sum=0,sum1 = 0;
        string res = "";
        
        while(n >=0 || m>=0){
            
            sum = carry;
            sum1 = 0;
            
            if(n>=0){
                
                sum += (X[n]-48);
                n--;
                
            }
            if(m>=0){
                
                sum += (Y[m]-48);
                m--;
                
            }
            
            sum1 = sum1 + sum%10;
            carry = sum/10;
            res.push_back(sum1+48);
            
        }
        
        if(carry){
            res.push_back(carry+48);
        }
        
        reverse(res.begin(),res.end());
        
        int cnt{};
        
        for(int i=0;i<res.size();i++){
            
            if(res[i] == '0') cnt++;
            else break;
        }
        
        if(cnt == res.size()) return "0";
        
        return res.substr(cnt,res.size()-cnt);
        
    }
};

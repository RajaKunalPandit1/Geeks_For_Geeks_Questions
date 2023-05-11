Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2285
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  private:
  int frontChar(string &s,int n){
        for(int i=0;i<n;i++){
            if(s[i]!='?') return i;
        }
        return -1;
    }
    int backChar(string &s,int n){
        for(int i=n-1;i>=0;i--){
            if(s[i]!='?') return i;
        }
        return -1;
    }
    int solve(string &s){
        int n,ans,x,y;
        char prev;
    
        ans=0;
        n=s.size();
        x=frontChar(s,n);
        y=backChar(s,n);

        if(x==-1 || x==y) return 0;
    
        if(x<=n-y-1){
            prev=s[x];
        }
        else{
            prev=s[y];
        }
       
        for(int i=min(x,n-y-1),j=n-i-1;i<j;i++,j--){
            char tf=s[i];
            char tb=s[j];
    
            if(tf=='?' && tb=='?'){
                continue;
            }
            else if(tf=='?'){
                ans+=abs(tb-prev);
                prev=tb;
            }
            else if(tb=='?'){
                ans+=abs(tf-prev);
                prev=tf;
            }
            else if(tf==tb && tf!='?'){
                ans+=abs(prev-tf);
                prev=tf;
            }
            else{
                return -1;
            }
        }
    
        return 2*ans;
    }
  public:
    int minimumSum(string s) {
        // code here
        int ans=solve(s);
        return ans;
    }
};

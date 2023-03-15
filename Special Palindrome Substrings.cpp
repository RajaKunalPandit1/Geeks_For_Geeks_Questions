Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1112 /1112
Total Points Scored: 
4 /4
Your Total Score: 
2065
Total Time Taken: 
0.14
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
    //Complete the function and return minimum number of operations
    public:
    int solve(int st,int e,string s){
      int i=0,j=s.size()-1;
      int ans=0;
      while(i<j){
          if(s[i]==s[j]){
              i++;
              j--;
          }
          else if((i>=st&&j<=e)){
            return -1;
          }
          else {
              ans++;
              i++;
              j--;
          }
      }
      return ans;
    }
    int specialPalindrome(string s1, string s2){
                int ans=INT_MAX;
        int n=s1.size();
        int m=s2.size();
        for(int i=0;i<=n-m;i++){
            string s=s1;
            int cnt=0;
            for(int j=0;j<m;j++){
                if(s[i+j]!=s2[j]){
                   s[i+j]=s2[j];
                   cnt++;
                } 
            }
           // cout<<s<<" "<<cnt<<" ";
            int x=solve(i,i+m-1,s);
           // cout<<x<<" "<<endl;
            if(x>=0){
                ans=min(ans,x+cnt);
            }
        }
        return ans==INT_MAX?-1:ans;
    }
};

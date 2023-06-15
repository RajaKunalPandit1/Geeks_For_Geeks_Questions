Output stattus : 

Problem Solved Successfully
Test Cases Passed: 
173 /173
Total Points Scored: 
4 /4
Your Total Score: 
2487
Total Time Taken: 
0.13
Your Accuracy: 
100%
Attempts No.: 
1


      string longestPalin (string S) {
        
                int st=0,end=0,n=S.length();
        for(int i=0;i<n;i++){
            int j=i-1,k=i+1;
            int cnt=1;
            while(j>=0 && k<n && (S[j]==S[k])){
                j--;
                k++;
                cnt+=2;
            }
            if((end-st+1)<cnt){
                st=j+1;end=k-1;
            }
            j=i-1;k=i;cnt=0;
            while(j>=0 && k<n && (S[j]==S[k])){
                j--;
                k++;
                cnt+=2;
            }
            if((end-st+1)<cnt){
                st=j+1;end=k-1;
            }
        }
        string ans="";
        for(int i=st;i<=end;i++){
            ans+=S[i];
        }
        return ans;
        
    }

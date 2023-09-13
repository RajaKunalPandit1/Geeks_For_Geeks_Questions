Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2840
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

    string findLargest(int N, int S){
        
        if(S>N*9 || (S==0 && N>1)) return "-1";
        
        string ans="";
        while(N--){
            if(S>9){
                ans+="9";
                S-=9;
            }
            else{
                if(S!=0){
                    string tmp = to_string(S);
                    ans+=tmp;
                    S=0;
                }
                else
                    ans+="0";
            }
        }
        return ans;
    }

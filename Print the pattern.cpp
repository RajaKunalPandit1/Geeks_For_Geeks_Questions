Output Status : 

Problem Solved Successfully
Test Cases Passed: 
67 /67
Total Points Scored: 
2 /2
Your Total Score: 
1344
Total Time Taken: 
0.02
Your Accuracy: 
100%
Attempts No.: 
1


class Solution{
public:
    vector<string> pattern(int n){
        
        vector<string> str;
        
        int cnt = 1;
        
        for(int i=1;i<=n;i++){
            
            string temp = "";
            
            for(int j=1;j<=n;j++){
                if(j<i){
                    temp += "--";
                }else{
                    temp += to_string(cnt);
                    if(j!=n) temp += "*";
                    cnt++;
                }
            }
            str.push_back(temp);
        }
        
        for(int i=n-1;i>=0;i--){
            
            string temp = str[i];
            
            for(int j=0;j<n-i;j++){
                temp += "*";
                temp += to_string(cnt);
                cnt++;
            }
            str[i] = temp;
        }
        return str;
    }
};

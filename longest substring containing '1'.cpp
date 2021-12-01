Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/1.1
Your Accuracy:
100%
Attempts No.:
1



int maxlength( string s)
{
    int n = s.length();
    
    int cnt=0,res=0;
    
    for(int i=0;i<n;i++){
        if(s[i] == '1'){
            cnt++;
            res = max(res,cnt);
        }else{
            cnt =0;
        }
    }
    return res;
}

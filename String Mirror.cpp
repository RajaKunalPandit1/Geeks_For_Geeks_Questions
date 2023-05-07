Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2261
Total Time Taken: 
0.02
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    string stringMirror(string str){
        int i=1;
        while(i<str.size()&&str[i]<=str[i-1])
        {
            if(str[i]==str[i-1]&&i==1)break;
            ++i;
        }
        string s=str.substr(0,i);
        string t=s;
        reverse(s.begin(),s.end());
        t+=s;
        return t;
    }
};

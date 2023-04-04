Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1022 /1022
Total Points Scored: 
4 /4
Your Total Score: 
2135
Total Time Taken: 
0.01
Your Accuracy: 
33%
Attempts No.: 
3



int minSteps(string str) {
    
     int cnt=0;

    if(str.length() == 1)return 1;

    for(int i=1;i<str.length();i++)

    {

        if(str[i] != str[i-1])cnt++;

    }

    if(cnt%2 == 0)return (cnt/2)+1;

    else return (cnt/2)+2;
    

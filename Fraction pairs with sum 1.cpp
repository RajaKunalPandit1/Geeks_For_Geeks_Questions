Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1121 /1121
Total Points Scored: 
4 /4
Your Total Score: 
2754
Total Time Taken: 
0.22
Your Accuracy: 
50%
Attempts No.: 
2

    int countFractions(int n, int num[], int den[])
    {
       int ans=0;
       
       for(int i=0;i<n;i++)
       {
           int gcd=__gcd(num[i],den[i]);
           num[i]=num[i]/gcd;
           den[i]=den[i]/gcd;
       }
       
       map<pair<int,int>,int> s;
       
       for(int i=0;i<n;i++)
       {
           if(s.find({den[i]-num[i],den[i]})!=s.end())
           {
               ans+=s[{den[i]-num[i],den[i]}];
               s[{num[i],den[i]}]++;
           }
           else
           {
               s[{num[i],den[i]}]++;
           }
       }
       return ans;
    }

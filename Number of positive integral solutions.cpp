Output Status: 

Problem Solved Successfully 
 Test Cases Passed:
100 / 100
Total Points Scored:
4/4
Total Time Taken:
0.01/1.12
Your Accuracy:
100%
Attempts No.:
1

class Solution{

public:
    
    #define ll long long

    long posIntSol(string s)
    {
        
        ll n = s.size();
        ll op = 0,res = 0;
        for(ll i=0;i<n;i++){
            if(s[i] == '='){
                op = i+1;
                break;
            }
        }
        
        res = stoi(s.substr(op,s.size()-op));
        
        op = op-op/2;
        
        ll sum = 1;
        op--;
        res--;
        
        for(ll i=0;i<op;i++){
            sum = sum*res;
            res--;
        }
        
        ll get = 1;
        
        while(op>0){
            get*=op;
            op--;
        }
            return sum/get;
        }
        
   };
   
   // Another Solution :: 
   
   long factorial(int n)
{
    long f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
class Solution{
public:
    long posIntSol(string s)
    {
        int n=0;
        int equal_index=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='+')
                n++;
            if(s[j]=='=')
                equal_index=j;
        }
    
        string number=s.substr(equal_index+1);
        int k=stoi(number);
        k--;
        long long numberator=1;
    
        for(int j=0;j<n;j++)
        {
            numberator=numberator*(k);
            k--;
    
        }
        long denominator=factorial(n);
        long ans = numberator/denominator;
        return ans;
    }
};

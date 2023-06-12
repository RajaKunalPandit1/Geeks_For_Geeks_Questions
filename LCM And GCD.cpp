Output Status  : 

Problem Solved Successfully
Test Cases Passed: 
102 /102
Total Points Scored: 
1 /1
Your Total Score: 
2453
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1


    long long gcd(long long a, long long b){
            
        if(b == 0){
            return a;
        }
        return (gcd(b,a%b));
    }
    
    long long lcm(long long a, long long b){
        
        return ((a*b)/gcd(a,b));
    }
  
    vector<long long> lcmAndGcd(long long a, long long b) {
        
        long long HCF = gcd(a,b);
        long long LCM = lcm(a,b);
        
        return {LCM,HCF};
    }

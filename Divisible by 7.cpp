Output Status: 


Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.1/2.2
Your Accuracy:
25%
Attempts No.:
4


class Solution{
  public:
    int isdivisible7(string num){
        
        int n = num.size();
        
        int res = 0;
        
        for(int i=0;i<n;i++){
            int temp = num[i] - '0';
            res = (res*10) + temp;
            res %= 7;
        }
        return (res == 0?1:0);
        
    }
};


// Another Solution 


class Solution{
  public:
    int isdivisible7(string num) { 
        int n = num.length(), gSum = 0; 
        if (n % 3 == 1) { 
            num += "00"; 
            n += 2; 
        } 
        else if (n % 3 == 2) { 
            num += "0"; 
            n++; 
        } 
        int i, GSum = 0, p = 1; 
        for (i = n - 1; i >= 0; i--) { 
            int group = 0; 
            group += num[i--] - '0'; 
            group += (num[i--] - '0') * 10; 
            group += (num[i] - '0') * 100; 
      
            gSum = gSum + group * p; 
            p *= (-1); 
        } 
        return (gSum % 7 == 0); 
    } 

};

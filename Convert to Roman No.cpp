Output Status: 

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/1.4
Your Accuracy:
33%
Attempts No.:
3

class Solution{
  public:
    
    vector<string>romans= {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    vector<int>nums={1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
  
  string convertToRoman(int n)
  {
    string res = "";
    for(int i =12; i>=0; i--)
    {
    while(n>=nums[i]){
        res+=romans[i];
        n = n-nums[i];
    }
    }
    return res;
}

};

// Another Solution 

class Solution{
  public:
    string convertToRoman(int n) {
        string strrom[][10]={{"","I","II","III","IV","V","VI","VII","VIII","IX"},{"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
                            {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},{"","M","MM","MMM","","","","","",""}};
            int i=0;
            string str="";
            while(n){
            str = strrom[i][n % 10] + str;
            n /= 10;
            i++;
        }
        return str;
    }
};

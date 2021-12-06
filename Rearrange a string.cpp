Output Status: 


Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.3/3.9
Your Accuracy:
100%
Attempts No.:
1


class Solution
{
  public:
    string arrangeString(string str)
    {
        int n = str.length();
        
        string res = "";
        int dig_sum = 0;
        
        
        for(int i=0;i<n;i++){
            if(str[i]>='0' && str[i]<='9'){
                dig_sum += str[i] - '0';
            }else{
                res += str[i];
            }
        }
        
        sort(res.begin(),res.end());
        
        res += to_string(dig_sum);
        
        return res;
        
    }
};

// Another Solution


class Solution
{
  public:
    string arrangeString(string str)
    {
        int char_count[26] = {0};
        int sum = 0;
        for (int i = 0; i < str.length(); i++){
            if (str[i]>='A' && str[i] <='Z')
                char_count[str[i]-'A']++;
            else
                sum = sum + (str[i]-'0');
        }
    
        string res = "";
        for (int i = 0; i < 26; i++){
            char ch = (char)('A'+i);
            while (char_count[i]--)
                res = res + ch;
        }
        if (sum > 0)
            res = res + to_string(sum);
        return res;
        
    }
};

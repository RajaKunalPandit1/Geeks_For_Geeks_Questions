Output Status:

Problem Solved Successfully 
Total Points Scored:
1/1
Total Time Taken:
0.0/3.4
Your Accuracy:
100%
Attempts No.:
1



class Solution
{
  public:
    string gameResult (string s)
        {
            char A = s[0];
            char B = s[1];
            string res = "";
            
            if(A == B){
                res += "DRAW";
            }else if( A == 'R' && B == 'S'){
                res += "A";
            }else if(A == 'S' && B == 'P'){
                res += "A";
            }else if(A == 'P' && B == 'R'){
                res += "A";
            }else if( B == 'R' && A == 'S'){
                res += "B";
            }else if(B == 'S' && A == 'P'){
                res += "B";
            }else if(B == 'P' && A == 'R'){
                res += "B";
            }
            
            return res;
        }
};


// Another Solution 



class Solution
{
  public:
    string gameResult (string s)
        {
            if (s[0] == s[1]) return "DRAW";
        
        
            // R,S : Winner = R
            // R,P : Winner = P
            // P,S : Winner = S
            if (s[0] == 'R')
            {
                if (s[1] == 'S')
                    return "A";
                return "B";
            }
        
            else if (s[0] == 'S')
            {
                if (s[1] == 'P')
                    return "A";
                return "B";
            }
        
            else
            {
                if (s[1] == 'R')
                    return "A";
                return "B";
            }
        }
        // Contributed By: Pranay Bansal


};

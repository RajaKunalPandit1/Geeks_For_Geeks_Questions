Output Status: 

Problem Solved Successfully 
Total Points Scored:
0/0
Total Time Taken:
0.1/2.5
Your Accuracy:
100%
Attempts No.:
1


class Solution
{
    public:
        
        bool isVowel(char ch){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                return true;
            }
        }
    
        string modify (string s)
        {
            
            int n = s.length();
            
            int l=0,h=n-1;
            
            while(l<h){
                    
                if(!isVowel(s[l])){
                    while(!isVowel(s[l]) && l<h){
                        l++;
                    }
                }
                if(!isVowel(s[h])){
                    while(!isVowel(s[h]) && l<h){
                        h--;
                    }
                }
                
                swap(s[l],s[h]);
                l++;h--;
                
            }
            return s;
            
        }
    };  
    
    
    // Another Solution 
    
    class Solution
{
    public:
        string modify (string s)
        {
            string vow = "";
            for (int i = 0; i < s.length (); ++i)
            {
                // removing the vowels from s and adding them to the string vow
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                {
                    vow += s[i];
                    s[i] = '.'; // to indicate that the current position is now empty
                }
            }
        
            // traversing s in reverse order and placing the vowels at empty locations
            int i = s.length () - 1;
            int j = 0;
            while (i >= 0)
            {
                if (s[i] == '.') s[i] = vow[j++];
                i--;
            }
            return s;
        }
        
        // Contributed By: Pranay Bansal

};
    

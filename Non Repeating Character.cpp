Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
1120 /1120
Your Total Score: 
2708
Total Time Taken: 
0.02
Correct Submission Count: 
4
Attempts No.: 
4

    char nonrepeatingCharacter(string s)
    {
       
        int n = s.length();
        unordered_map<char,int> mp;
        
        char res = '$';
        
        for(auto ch : s){
            mp[ch]++;
        }
        
        for(auto ch : s){
            if(mp[ch] == 1){
                res = ch;
                break;
            }
        }
        
        return res;
    }

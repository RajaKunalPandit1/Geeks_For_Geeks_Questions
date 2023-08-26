Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2792
Total Time Taken: 
0.06
Your Accuracy: 
100%
Attempts No.: 
1

      int longestKSubstr(string s, int k) {
    
        vector<int> freq (26, 0);
        
        int start = 0, end = 0, ans = -1, n = s.size(), unique = 0;
        
        while(end < n) {
            if(freq[s[end] - 'a'] == 0)   unique++;
            
            freq[s[end] - 'a']++;
            
            
            while(unique > k) {
                if(freq[s[start] - 'a'] == 1) {
                    unique--;
                }
                
                freq[s[start++] - 'a']--;
            }
            
            if(unique == k) ans = max(ans, end - start + 1);
            end++;
        }
        
        return ans;
    }

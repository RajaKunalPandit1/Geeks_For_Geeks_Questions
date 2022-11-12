Output Status : 

Problem Solved Successfully
Test Cases Passed: 
416 /416
Total Points Scored: 
4 /4
Your Total Score: 
1578
Total Time Taken: 
0.04
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
	public:
		int characterReplacement(string s, int k){
		    
		    vector<int> freq(26,0);
		    
		    int n = s.length();
		    
		    int max_freq = 0;
		    int start = 0,end = 0;
		    
		    int res = 0;
		    
		    while(end < n){
		        
		        int curr = freq[s[end++]-'A']++;
		        
		        max_freq = max(max_freq,curr+1);
		        
		        if((k+max_freq) < (end-start)){
		            freq[s[start++]-'A']--;
		        }else{
		            res = max(res,end-start);
		        }
		    }
		    return res;
		}
};

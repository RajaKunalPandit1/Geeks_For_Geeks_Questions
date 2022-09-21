Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1510 /1510
Total Points Scored: 
4 /4
Your Total Score: 
1392
Total Time Taken: 
0.31
Your Accuracy: 
100%
Attempts No.: 
1


class Solution
{
   public:
    string ReFormatString(string S, int K){
    	
    	string res = "";
    	int cnt = 0;
    	
    	for(int i=S.size()-1;i>=0;i--){
    	    
    	    char ch = S[i];
    	    
    	    if(cnt == K){
    	        
    	        res.push_back('-');
    	        cnt = 0;
    	    }
    	    
    	    if(ch == '-'){
    	        continue;
    	    }else{
    	        res.push_back(ch);
    	        cnt++;
    	    }
    	}
    	
    	reverse(res.begin(),res.end());
    	
    	for(auto &ch : res){
    	    ch = toupper(ch);
    	}
    	
    	if(res[0] == '-'){
    	    return res.substr(1);
    	}else{
    	    return res;
    	}
    }
};

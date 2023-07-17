Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2698
Total Time Taken: 
0.13
Your Accuracy: 
100%
Attempts No.: 
1

		string FirstNonRepeating(string str){
		    
		    unordered_map<char,int> mp;
		    queue<char> q;
		    string res = "";
		    
		    for(auto ch : str){
		        
		        mp[ch]++;
		        q.push(ch);    
		          
		        while(!q.empty() && mp[q.front()] > 1){
		            q.pop();
		        }
		        
		        if(q.empty()){
		            res += "#";   
		        }else{
		            res += q.front();
		        }
		    }
		    return res;
		}

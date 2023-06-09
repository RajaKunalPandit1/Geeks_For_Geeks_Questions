Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2419
Total Time Taken: 
0.02
Your Accuracy: 
50%
Attempts No.: 
2

class Solution {

{
	public:
		vector<string>find_permutation(string S)
		{
		    
		    vector<string> v;
		    
		    sort(S.begin(),S.end());
		    
		    do{
		        v.push_back(S);
		    }while(next_permutation(S.begin(),S.end()));
		    
		    return v;
		}
};

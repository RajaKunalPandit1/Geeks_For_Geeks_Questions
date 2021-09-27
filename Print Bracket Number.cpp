Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.1/2.2
Your Accuracy:
100%
Attempts No.:
1
  
  
  
class Solution{
public:

vector<int> barcketNumbers(string s)
{
    int n = s.length();
    stack<int>st;
    vector<int>res;
    
   int cnt = 1;
    for(int i=0;i<n;i++){
        
        if(s[i] == '('){
            res.push_back(cnt);
            st.push(cnt);
            cnt++;
        }else if(s[i] == ')'){
                res.push_back(st.top());
                st.pop();
            }
    }
    return res;
    
    
}
};

// Another Solution

class Solution{
public:
	vector<int> barcketNumbers(string S)
	{
		vector<int> ans;
		stack<int> st;

		int bal = 0;

		for(int i = 0; i < S.size(); i++)
		{
			if(S[i]=='(')
			{
				bal++;
				ans.push_back(bal);
				st.push(bal);
			}
			else if(S[i]==')')
			{
				ans.push_back(st.top());
				st.pop();
			}
		}

		return ans;
	}
 
   
};

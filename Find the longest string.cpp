Output Status : 

Problem Solved Successfully
Test Cases Passed: 
145 /145
Total Points Scored: 
4 /4
Your Total Score: 
1783
Total Time Taken: 
0.07
Your Accuracy: 
100%
Attempts No.: 
1

class Solution
{
public:
    string longestString(vector<string> &words)
    {
        string ans;
        unordered_map<string,int>m;
        sort(words.begin(),words.end());
        
        for(int i=0; i<words.size(); i++)
        {
            m[words[i]]++;
        }
        
        for(int i=0; i<words.size(); i++)
        {
            string str;
            int cnt=0;
            
            for(int j=0; j<words[i].size(); j++)
            {
                str.push_back(words[i][j]);
                
                if(m[str]) cnt++;
            }
            // cout<<cnt<<" ";
            
            if(cnt==str.length() && cnt > ans.length())
            {
                ans= words[i];
            }
        }
        return ans;
    }
};

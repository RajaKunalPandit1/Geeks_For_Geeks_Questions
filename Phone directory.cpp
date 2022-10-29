Output Status : 

Problem Solved Successfully
Test Cases Passed: 
205 /205
Total Points Scored: 
8 /8
Your Total Score: 
1530
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
       string temp; 
        vector<string> v;
        vector<vector<string>> ans;
        
        for(int j=0;j<s.size();j++){
            temp += s[j];
            int i=0;
            
            for(;i<n;i++){
                int k=0;
                for(;k<temp.size();k++){
                    if(temp[k] != contact[i][k]){
                        break;
                    }
                }
                if(k == temp.size()){
                    v.push_back(contact[i]);
                }
            }
            if(v.empty()){
                v.push_back("0");
            }
            sort(v.begin(),v.end());
            v.erase(unique(v.begin(),v.end()),v.end());
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }

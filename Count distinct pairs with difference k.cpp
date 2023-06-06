Output Status : 

Problem Solved Successfully
Test Cases Passed: 
142 /142
Total Points Scored: 
2 /2
Your Total Score: 
2402
Total Time Taken: 
1.31
Your Accuracy: 
33%
Attempts No.: 
3

class Solution {
	public:
	int TotalPairs(vector<int>arr, int k){
	    
	    unordered_map<int,int> mp;
        set<pair<int,int>> s;
        
        for(int i=0;i<arr.size();i++)
        {
            if(mp[k+arr[i]]>0 || mp[arr[i]-k]>0)
            {
                if(mp[k+arr[i]]>0)
                {
                     s.insert(make_pair(arr[i],(k+arr[i])));
                }
                if(mp[arr[i]-k]>0)
                {
                    s.insert(make_pair((arr[i]-k),arr[i]));
                }
               
            }
            mp[arr[i]]++;
        }
        return s.size();
	}
};

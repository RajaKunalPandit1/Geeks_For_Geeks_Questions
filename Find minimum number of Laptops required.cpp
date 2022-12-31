Output Status : 

Problem Solved Successfully
Test Cases Passed: 
122 /122
Total Points Scored: 
4 /4
Your Total Score: 
1771
Total Time Taken: 
0.43
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {
  public:
    int minLaptops(int n, int start[], int end[]) {
        
        
        sort(start,start+n);
        sort(end,end+n);
        
        int i=1,res = 1, j =0 ;
        
        while(i < n && j < n){
            if(start[i] < end[j]){
                res++;
            }else{
                j++;
            }
            i++;
        }
        return res;
    }
};

// Another Solution :: 

class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) {
        map<int,int>mp;
        for(int i=0; i<N; i++)
        {
            mp[start[i]] += 1;
            mp[end[i]] -= 1;
        }
        vector<pair<int,int>> s;
        for(auto it: mp)
            s.push_back(it);
        sort(s.begin(), s.end());
        int c=0,ans=0;
        for(pair<int,int> i:s)
        {
            c+=i.second;
            ans=max(ans,c);
        }
        return ans;
    }
};

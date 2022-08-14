Output Status : 

Problem Solved Successfully
Test Cases Passed: 
101110 /101110
Total Points Scored: 
4 /4
Your Total Score: 
1291
Total Time Taken: 
0.43
Your Accuracy: 
100%
Attempts No.: 
1

/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

class Solution{
public:
    
    static bool compare(pair<int,int>a, pair<int,int>b){
        return a.second < b.second;
    }
    
    int maxChainLen(struct val p[],int n){
        
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({p[i].first,p[i].second});
        }
        
        sort(v.begin(),v.end(),compare);
        int res = 1;
        
        pair<int,int> prev = v[0];
        
        for(int i=1;i<n;i++){
            if(v[i].first > prev.second){
                res++;
                prev = v[i];
            }
        }
        return res;
    }
};

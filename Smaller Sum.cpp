Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2209
Total Time Taken: 
0.44
Your Accuracy: 
33%
Attempts No.: 
3

class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        
        vector<long long> res;
        
        vector<int> temp = arr;
        sort(temp.begin(),temp.end());
        
        unordered_map<int,long long> mp;
        long long cnt = 0;
        
        int prev = 0;
        for(int i=0;i<n;i++){
            
            if(prev == temp[i]){
                cnt += temp[i];
            }else{
                mp[temp[i]] = cnt;
                cnt += temp[i];
                prev = temp[i];
            }
        }
        
        for(int i=0;i<n;i++){
            res.push_back(mp[arr[i]]);
            
        }
        return res;
    }
};

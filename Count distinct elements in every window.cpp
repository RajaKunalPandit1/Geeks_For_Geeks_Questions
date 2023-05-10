Output Status : 

Problem Solved Successfully
Test Cases Passed: 
260 /260
Total Points Scored: 
2 /2
Your Total Score: 
2281
Total Time Taken: 
0.91
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
  public:
    vector <int> countDistinct (int arr[], int n, int k)
    {
        
        unordered_map<int,int> mp;
        
        vector<int> res;
        
        for(int i=0;i<k;i++){
            mp[arr[i]]++;
        }
        
        res.push_back(mp.size());
        
        for(int i=k;i<n;i++){
            
            mp[arr[i]]++;
            
            if(mp[arr[i-k]] == 1){
                mp.erase(arr[i-k]);
            }else{
                mp[arr[i-k]]--;
            }
            res.push_back(mp.size());
        }
        return res;
    }
};

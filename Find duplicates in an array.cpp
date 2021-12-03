Output Status: 

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.8/1.6
Your Accuracy:
12%
Attempts No.:
8

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
       
      unordered_map<int,int> mp;
       
       vector<int> res;
       bool flag = true;
       for(int i=0;i<n;i++){
           mp[arr[i]]++;
       }
       
       for(auto x: mp){
           if(x.second>1){
               res.push_back(x.first);
               flag = false;
           }
       }
       
       sort(res.begin(),res.end());
       
       if(flag == false){
           return res;
       }else{
           res.push_back(-1);
       }
       return res;
    }
};

// Another Solution 


class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // First check all the values that are
        // present in an array then go to that
        // values as indexes and increment by
        // the size of array
        for (int i = 0; i < n; i++) {
            int index = arr[i] % n;
            arr[index] += n;
        }
    
        // Now check which value exists more
        // than once by dividing with the size
        // of array
        bool flag = false;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if ((arr[i] / n) > 1) {
                ans.push_back(i);
                flag = true;
            }
        }
        if (!flag) ans.push_back(-1);
        return ans;
    }
};

Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
304 /304
Your Total Score: 
2374
Total Time Taken: 
0.01
Correct Submission Count: 
2
Attempts No.: 
2

class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        
        vector<vector<int>> res;
        
        if(intervals.size() == 0){
            return res;
        }
        
        sort(intervals.begin(),intervals.end());
        
        int i;
        
        for(i=0;i<intervals.size();){
            
            int start = intervals[i][0];
            int end = intervals[i][1];
            vector<int> v;
            
            for(int j=i+1;j<intervals.size();j++){
                if(intervals[j][0] <= end){
                    end = max(end,intervals[j][1]);
                    i = j;
                }else{
                    break;
                }
            }
            
            i++;
            v.push_back(start);
            v.push_back(end);
            res.push_back(v);
            
        }
        return res;
    }
};

class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         
         vector<vector<int>> res;
         
         if(intervals.size() == 0){
             return res;
         }
         
         sort(intervals.begin(),intervals.end());
         
         vector<int> v;
         
         v = intervals[0];
         
         for(auto it: intervals){
             
             if(it[0] <= v[1]){
                 v[1] = max(v[1],it[1]);
             }else{
                 res.push_back(v);
                 v = it;
             }
         }
         res.push_back(v);
         return res;
    }
};

Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
2 /2
Your Total Score: 
2415
Total Time Taken: 
0.48
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{

    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        
        vector<pair<int,int>> vec;
        
        for(int i=0;i<n;i++){
            
            pair<int,int>p = make_pair(end[i],start[i]);
            vec.push_back(p);
            
        }
        
        sort(vec.begin(),vec.end());
        
        int res = 0;
        int prev = -1;
        
        for(int i=0;i<n;i++){
            if(prev < vec[i].second){
                res++;
                prev = vec[i].first;
            }
        }
        return res;
    }
};

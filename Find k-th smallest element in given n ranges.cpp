Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1110 /1110
Total Points Scored: 
4 /4
Your Total Score: 
2319
Total Time Taken: 
0.11
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
    public:
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        
        sort(range.begin(),range.end());
        vector<vector<int>> v;
        v.push_back(range[0]);
        for(int i = 1;i<range.size();i++){
            if(range[i][0]>v[v.size()-1][1]){
                v.push_back(range[i]);
            }else{
                if(range[i][1]>v[v.size()-1][1]){
                    vector<int> v1 = {v[v.size()-1][1]+1,range[i][1]};
                    v.push_back(v1);
                }
            }
        }
        v[0].push_back(v[0][1]-v[0][0]+1);
        for(int i = 1;i<v.size();i++){
            v[i].push_back(v[i][1]-v[i][0]+1+v[i-1][2]);
        }
        vector<int> vv;
        for(int i = 0;i<q;i++){
            if(queries[i]>v[v.size()-1][2]){
                vv.push_back(-1);
            }else{
                if(queries[i]<=v[0][2]){
                    vv.push_back(v[0][0]+queries[i]-1);
                }else{
                    for(int j = 0;j<v.size();j++){
                        if(v[j][2]>=queries[i]){
                            vv.push_back(v[j][0]+queries[i]-1-v[j-1][2]);
                             break;
                        }
                       
                    }
                }
            }
        }
       return vv; 
    } 
};

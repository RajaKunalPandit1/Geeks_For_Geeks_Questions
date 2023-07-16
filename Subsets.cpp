Output Status : 

Problem Solved Successfully
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
Test Cases Passed: 
111 /111
Your Total Score: 
2689
Total Time Taken: 
1.25
Correct Submission Count: 
3
Attempts No.: 
3

    void sub(int i, int n, vector<int>a, vector<int>&v, vector<vector<int>> &res){
    
        if(i < n){
            
            sub(i+1,n,a,v,res);
            v.push_back(a[i]);
            sub(i+1,n,a,v,res);
            v.pop_back();
        }else{
            res.push_back(v);
        }
            
    }
    
    vector<vector<int>> subsets(vector<int>& a)
    {
        vector<vector<int>> res;
        vector<int> v;
    
        sub(0,a.size(),a,v,res);
        sort(res.begin(),res.end());
        return res;
    }

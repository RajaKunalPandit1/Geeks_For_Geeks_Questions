Output Status : 

Problem Solved Successfully
Test Cases Passed: 
165 /165
Total Points Scored: 
2 /2
Your Total Score: 
1951
Total Time Taken: 
0.51
Your Accuracy: 
50%
Attempts No.: 
2

class Solution{   
public:
    int appleSequences(int n, int m, string s){
        
         int maxi=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(s[i]=='O')
            v.push_back(i);
        }
        for(int i=0;i<n;i++){
            auto it1=lower_bound(v.begin(),v.end(),i);
            int firstOrangeIndex=it1-v.begin();
            int lastOrangeIndex=firstOrangeIndex+m;
            if(it1==v.end() or lastOrangeIndex>v.size()-1){
                maxi=max(maxi,n-i);
                break;
            }
            maxi=max(maxi,v[lastOrangeIndex]-i);
        }
        return maxi;
         
    }
};

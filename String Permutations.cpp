Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2742
Total Time Taken: 
0.02
Your Accuracy: 
100%
Attempts No.: 
1

       void solve(vector<string>&vs, string s, string S, int freq[]){
        
        if(s.size()== S.size()){
            vs.push_back(s);
            return;
        }
        
        for(int i=0; i<S.size(); i++){
            if(!freq[i]){
                s+= S[i];
                freq[i]= 1;
                solve(vs,s, S, freq);
                freq[i]= 0;
                s.pop_back();
            }
        }
    }
    
    vector<string> permutation(string S)
    {
        vector<string>vs;
        string s= "";
        int freq[S.size()];
        for(int i=0; i<S.size(); i++){
            freq[i]= 0;
        }
        solve(vs, s, S, freq);
        sort(vs.begin(), vs.end());
        return vs;
    }

Output Status : 

Your Answer is correct !

string Solution::solve(string s) {
    
    int n = s.length();
    string res = "";
    deque<char> dq;
    dq.push_back(s[0]);
    
    unordered_map<int,int> mp;
    
    for(int i=0;i<n;i++){
        
        if(mp[s[i]] == 0){
            dq.push_back(s[i]);
        }
        mp[s[i]]++;
        
        while(!dq.empty() && mp[dq.front()] > 1){
            dq.pop_front();
        }
        
        res += dq.empty()?'#':dq.front();    
    }
    return res;
    
}

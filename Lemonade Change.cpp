Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2556
Total Time Taken: 
0.09
Your Accuracy: 
100%
Attempts No.: 
1

    bool lemonadeChange(int n, vector<int> &bills) {
        
        unordered_map<int,int> mp;
        
        for(int i=0;i<bills.size();i++){
            
            mp[bills[i]]++;
            
            if(bills[i] == 10){
                
                if(mp[5] >= 1){
                    mp[5]--;
                }else{
                    return false;
                }
            }else if(bills[i] == 20){
                
                if(mp[10] >=1 && mp[5] >= 1){
                    mp[10]--;
                    mp[5]--;
                }else if(mp[5] >= 3){
                    
                    mp[5] -= 3;
                }else{
                    return false;
                }
            }
        }
        return true;
    }

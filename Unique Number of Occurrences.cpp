Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
2 /2
Your Total Score: 
2683
Total Time Taken: 
0.08
Your Accuracy: 
100%
Attempts No.: 
1


  
// Time : O(N) :: Aux_Space : O(N)
  
bool isFrequencyUnique(int n, int arr[]){

        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        unordered_set<int> st;
        
        for(auto x : mp){
            if(st.find(x.second) != st.end()){
                return false;
            }
            st.insert(x.second);
        }
        return true;
    }

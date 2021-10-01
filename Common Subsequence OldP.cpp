Output Status:

Problem Solved Successfully 
Total Points Scored:
2/2
Total Time Taken:
0.0/2.3
Your Accuracy:
100%
Attempts No.:
1
  
  
 class Solution {
  public:
    int commonSubseq(string S1, string S2){
        
        int n1 = S1.length();
        int n2 = S2.length();
        
        int i=0,j=0;
        bool flag = false;
        while(i<n1){
            
            for(j=0;j<n2;j++){
                
                if(S1[i] == S2[j]){
                    flag = true;
                    break;
                }else{
                    continue;
                }
            }
            i++;            
        }
        
        return flag;
        
    }
};

// Another Solution 

class Solution {
  public:
    int commonSubseq(string S1, string S2){
        
        vector<int> arr(26 , 0);
    for(auto it : S1){
        if(it>='A' && it<='Z') arr[it-'A']++;
    }
    for(auto it : S2){
        if(it>='A' && it<='Z' && arr[it-'A']) return 1; 
    }
        return 0;
        
    }
};

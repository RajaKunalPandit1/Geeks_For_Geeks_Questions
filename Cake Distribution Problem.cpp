Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1121 /1121
Total Points Scored: 
8 /8
Your Total Score: 
2245
Total Time Taken: 
0.04
Your Accuracy: 
50%
Attempts No.: 
2

class Solution{
    public:
    int maxSweetness(vector<int>& a, int n, int k) {
         int l = 1;
        int h = 0;
        
        for(int i = 0; i < n; i++){
            h += a[i];
        }
        
        // int ans;
        while(l <= h){
            int mid = l + (h-l)/2;
            
            
            int piece = 0;
            int sweet = 0;
            for(int i = 0; i < n; i++){
                sweet += a[i];
                
                if(sweet >= mid){
                    piece++;
                    sweet = 0;
                }
            }
            
            if(piece < k+1){
                h = mid  - 1;
            }
            else{
                // ans = mid;
                l = mid+1;
            }
        }
        
        return h;
    }
};

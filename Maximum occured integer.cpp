Output Status : 

Problem Solved Successfully
Test Cases Passed: 
158 /158
Total Points Scored: 
2 /2
Your Total Score: 
2667
Total Time Taken: 
0.73
Your Accuracy: 
100%
Attempts No.: 
1

    // L and R are input array
    // maxx : maximum in R[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in L[] and R[]
    //Function to find the maximum occurred integer in all ranges.
    int maxOccured(int L[], int R[], int n, int maxx){
    
        int mp[maxx+1] = {0};
        
        for(int i=0;i<n;i++){
            
            int begin = L[i],end = R[i];
            
            for(int j=begin;j<=end;j++){
                mp[j]++;
            }
        }
        
        int res = 0;
        
        for(int i=1;i<=maxx;i++){
            if(mp[i] > mp[res]){
                res = i;
            }
        }
        
        return res;
    }

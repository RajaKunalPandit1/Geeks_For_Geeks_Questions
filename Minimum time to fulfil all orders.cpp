Output Status : 

Problem Solved Successfully
Test Cases Passed: 
200 /200
Total Points Scored: 
8 /8
Your Total Score: 
1342
Total Time Taken: 
0.01
Your Accuracy: 
100%
Attempts No.: 
1

class Solution{
    public:
    
    int countOfDonuts(vector<int> &rank, long long Time){
        
        long long donutCount = 0,count,val;
        
        for(int i=0;i<rank.size();i++){
            
            val = (Time * 2)/rank[i];
            
            count = ceil(sqrt(val));
            
            while(count && count*(count+1)>val){
                count--;
            }
            donutCount += count;
        }
        return donutCount;
    }
    
    int findMinTime(int N, vector<int>&arr, int L){
       
       int maxRank = *max_element(arr.begin(),arr.end());
       
       long long l = 1;
       long long h = (1ll*((N*(N+1))/2)*maxRank);
       
       long long required = 0,donutCount;
       
       long long Time = (l+h)/2,minTime = INT_MAX;
       
       while(l<=h){
           
           Time = (l+h)/2;
           
           donutCount = countOfDonuts(arr,Time);
           
           if(donutCount >= N){
               
               minTime = min(minTime,Time);
               h = Time-1;
            
           }else{
               l = Time + 1;
           }
           
       }
       return minTime;
    }
};

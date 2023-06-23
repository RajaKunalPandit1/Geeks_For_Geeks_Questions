Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1115 /1115
Total Points Scored: 
4 /4
Your Total Score: 
2560
Total Time Taken: 
0.42
Your Accuracy: 
100%
Attempts No.: 
1

    int leastInterval(int N, int K, vector<char> &tasks) {
        vector<int> arr(26,0);
        int maxfre=INT_MIN;
        for(auto i: tasks){
            arr[i-'A']++;
            maxfre=max(maxfre,arr[i-'A']);
        }
        sort(arr.begin(),arr.end(),greater<int>());
        int count=0;
        for(int i=0;i<26;i++){
            if(arr[i]==maxfre){
                count++;
            }
        }
        
        return max(N,((maxfre-1)*K+ (maxfre-1)+ count));
    }

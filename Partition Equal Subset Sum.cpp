Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1120 /1120
Total Points Scored: 
4 /4
Your Total Score: 
2848
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1

int equalPartition(int N, int arr[]){

        function<int()> checkOdd = [&]()->int{
            int flag = 0;
            for(int i =0; i< N; i++) flag ^=arr[i];
            return flag & 1;
        };
        if(checkOdd()) return 0;
        
        
        int target = 0;
        for(int i =0; i< N; i++) target += arr[i];
        target /=2;
        vector<int> subsets(target+1, 0);
        subsets[0]=1;
        for (int i =0; i<N; i++){
            if(arr[i] > target) return 0;
            for(int j = target; j >= arr[i]; j--){
                subsets[j] += subsets[j-arr[i]];
            }
        }
        return (subsets[target] != 0);
    }

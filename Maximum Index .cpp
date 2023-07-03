Output Status : 

Problem Solved Successfully
Test Cases Passed: 
1121 /1121
Total Points Scored: 
4 /4
Your Total Score: 
2651
Total Time Taken: 
0.61
Your Accuracy: 
33%
Attempts No.: 
3

    int maxIndexDiff(int arr[], int n) {
        
        int nums[n];
        
        for(int i =0;i<n;i++){
            nums[i]=arr[i];
        }
        
        sort(nums,nums+n);
        
        int k = n-1;
        int answer = 0;
        int i = 0;
        int j = n-1;
        
        while(i<j){
            int diff = j-i;
            if(arr[i]<=arr[j]){
                answer = max(answer,diff);
                i++;
                j = n-1;
            }
            else if(arr[i]==nums[k]){
                k--;
                i++;
            }
            else {
                j--;
            }
        }
        return answer;
    }

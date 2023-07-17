Output Status : 

Problem Solved Successfully
Test Cases Passed: 
122 /122
Total Points Scored: 
2 /2
Your Total Score: 
2700
Total Time Taken: 
0.27
Your Accuracy: 
100%
Attempts No.: 
1

     int max_path_sum(int arr[], int brr[], int l1, int l2)
    {
        
        int res = 0,s1 = 0,s2 = 0;
        int i=0,j=0;
        
        while(i< l1 && j< l2){
            
            if(arr[i] < brr[j]){
                s1 += arr[i++];
            }else if(arr[i] > brr[j]){
                s2 += brr[j++];
            }else{
                
                res += max(s1,s2) + arr[i];
                i++;
                j++;
                s1 = s2 = 0;
            }
        }
        
        while(i < l1){
            s1 += arr[i++];
        }
        
        while(j < l2){
            s2 += brr[j++];
        }
        
        res += max(s1,s2);
        return res;
    }

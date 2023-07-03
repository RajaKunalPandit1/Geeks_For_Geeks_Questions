Output Status : 

Problem Solved Successfully
Test Cases Passed: 
74 /74
Total Points Scored: 
2 /2
Your Total Score: 
2653
Total Time Taken: 
0.03
Your Accuracy: 
100%
Attempts No.: 
1

int minFlips (string arr)
{
    
    int n = arr.length();
    
    int cnt1 = 0,cnt2 = 0;
    
    for(int i=0;i<n;i++){
        
        if((i%2 == 0 && arr[i] != '0')){
            cnt1++;
        }else if((i%2 == 1 && arr[i] != '1' )){
            cnt1++;
        }
        
        if((i%2 == 0 && arr[i] != '1')){
            cnt2++;
        }else if((i%2 == 1 && arr[i] != '0')){
            cnt2++;
        }
    }
    return min(cnt1,cnt2);
}

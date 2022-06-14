Output Status : 

Problem Solved Successfully 
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
 Test Cases Passed:
200150 / 200150
Total Time Taken:
0.19/1.34
Correct Submission Count:
2
Attempts No.:
4


class Solution
{
    public:
    
        int trailingZero(int n){
            int res = 0;
            for(int i=5;i<=n;i*=5){
                res += n/i;
            }
            return res;
        }
        
    
        int findNum(int n)
        {
            int ans =0;   
            int low =0 ,high = n*5;
            
            while(low<=high){
                
                int mid = (low+high) >> 1;
                
                if(trailingZero(mid) >= n){
                    ans = mid;
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }
            return ans;
        }
};

// Another Solution 

class Solution
{
    public:
    bool check(int p, int n) { 
    int temp = p, count = 0, f = 5; 
    while (f <= temp) { 
        count += temp/f; 
        f = f*5; 
    } 
    return (count >= n); 
} 
  

int findNum(int n) { 
    if (n==1) 
        return 5; 
    int low = 0; 
    int high = 5*n; 
  
    while (low <high) { 
        int mid = (low + high) >> 1;
        if (check(mid, n)) 
            high = mid; 
        else
            low = mid+1; 
    } 
    return low; 
} 

};

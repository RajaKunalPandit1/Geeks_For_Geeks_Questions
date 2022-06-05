Output Status:

Problem Solved Successfully 
 Test Cases Passed:
12 / 12
Total Points Scored:
8/8
Total Time Taken:
0.03/1.12
Your Accuracy:
100%
Attempts No.:
1


class Solution{
public:
    long buzzTime(long N, long M, long L, long H[], long A[])
    {
        
        long low=0,high = max(L,M);
        long res = 0;
        
        while(low<=high){
            
            long var = 0;
            long mid = (low+high) >> 1;
            
            for(int i=0;i<N;i++){
                if(H[i]+A[i]*mid>=L){
                    var += H[i]+A[i]*mid;
                }
            }
            if(var>=M){
                res = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return res;
    }
};

// Another Solution 

class Solution{
public:
    long buzzTime(long N, long M, long L, long H[], long A[])
    {
        long l = 0, r = 0, mid, sum = 0;
        long x = max(M, L);
        for(long i = 0;i < N;i++){
	        if((x - H[i])%A[i] == 0)
	            r = max(r, (x - H[i])/A[i]);
	        else
	            r = max(r, (x - H[i])/A[i] + 1);
	    }
	    while(l <= r){
	        mid = (l + r)/2;
	        sum = 0;
	        for(long i = 0;i < N;i++)
	            if((H[i] + A[i]*mid) >= L)
	                sum += (H[i] + A[i]*mid);
            if(sum >= M)
	            r = mid-1;
	        else
	            l = mid+1;
	    }
	    return l;
    }
};

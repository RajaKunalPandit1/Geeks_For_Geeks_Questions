Output Status : 

Problem Solved Successfully
Test Cases Passed: 
122 /122
Total Points Scored: 
8 /8
Your Total Score: 
1717
Total Time Taken: 
0.11
Your Accuracy: 
100%
Attempts No.: 
1

class Solution {

  public:
    int splitArray(int arr[] ,int N, int K) {
         int max=INT_MIN,sum=0;

        for(int i=0;i<N;i++) {
            if(arr[i]>max) {
                max=arr[i];

            }
            sum+=arr[i];

        }

        int ans,l=max,h=sum,mid;

        while(l<=h) {

            mid=(l+h)/2;

            int ctr=1,s=0;

            for(int i=0;i<N;i++) {

                s+=arr[i];

                if(s>mid) {
                    ctr++;
                    s=arr[i];
                }
            }

            if(ctr>K) {
                l=mid+1;
            }
            else {
                ans=mid;

                h=mid-1;

            }
        }
        return ans;
    }
};
